#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 5000 

int vet[TAMANHO];
FILE *arquivo;
char nome_arquivo[30] = "arq_teste.txt";

int le_arquivo(){
	int i;
	arquivo = fopen(nome_arquivo, "r");
	if (arquivo == NULL){
		printf("o arquivo nao foi criado");
		return -1;
	}
	else{
		for (i = 0; i < TAMANHO; i++){
			if (i != TAMANHO-1){
				fscanf(arquivo, "%i,", &vet[i]);
			}
			else{
				fscanf(arquivo, "%i", &vet[i]);
			}
		}
	}
	
	fclose(arquivo);
}

void peneira(int raiz, int fundo) {
	int pronto, filhoMax, tmp;

	pronto = 0;
	while ((raiz*2 <= fundo) && (!pronto)) {
		if (raiz*2 == fundo) {
			filhoMax = raiz * 2;
		}
		else if (vet[raiz * 2] > vet[raiz * 2 + 1]) {
			filhoMax = raiz * 2;
		}
		else {
			filhoMax = raiz * 2 + 1;
		}

	if (vet[raiz] < vet[filhoMax]) {
		tmp = vet[raiz];
		vet[raiz] = vet[filhoMax];
		vet[filhoMax] = tmp;
		raiz = filhoMax;
    }
	else {
      pronto = 1;
	}
  }
}

int heapsort(int TAM){
	int i, tmp;
	for (i = (TAM / 2); i >= 0; i--) {
			peneira(i, TAM - 1);
		}

		for (i = TAM-1; i >= 1; i--) {
			tmp = vet[0];
			vet[0] = vet[i];
			vet[i] = tmp;
			peneira(0, i-1);}
}

int main(int argc, char *argv[]) {
	
	double tempo_gasto = 0.0;
	int i, ww, j;
	float media = 0;
	char nome_arquivo[20];
	
	int tamanhos[] = {500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000};
	
	le_arquivo();
	
	for (j = 0; j < 10; j++) {
		i = tamanhos[j];
		
		sprintf(nome_arquivo, "heapsort_%d.txt", i);
		FILE *arq = fopen(nome_arquivo, "w");
		fprintf(arq, "Tempos de cada execução: ");
		
		for(ww = 0; ww<1000; ww++){
			clock_t begin = clock();
			
			heapsort(i);
			
			clock_t end = clock();
			tempo_gasto += (double)(end - begin) / CLOCKS_PER_SEC;
			
			fprintf(arq, "%f, ", tempo_gasto);
			media += tempo_gasto;
			tempo_gasto = 0;
			
		}
		
		media = media/i;
		fprintf(arq, "\nMédia dos tempos: %f", media);
		media = 0;
	}
	
	printf("vetor ordenado: ");
	for(i = 0; i < TAMANHO; i++){
		printf("%d,", vet[i]);
	}
	printf("tempo gasto para rodar 1000 vezes: %f", tempo_gasto);
}
