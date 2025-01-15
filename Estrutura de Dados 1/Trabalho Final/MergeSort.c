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

MergeSort(i, f) {
	int m;
	if (i < f) {
		m = (i+f)/2;
		MergeSort(i, m);
		MergeSort(m+1, f);
		merge(i, f);
	}
}

merge(i, f) {
	int m, j, aux[f+1];
	m = (i+f)/2;
	int i1 = i;
	int i2 = i;
	int i3 = m+1;
	while (i2 <= m && i3 <= f){
		if (vet[i2] < vet[i3])
			aux[i1++] = vet[i2++];
		else
			aux[i1++] = vet[i3++];}
	while (i2 <= m)
		aux[i1++] = vet[i2++];
	while (i3 <= f)
		aux[i1++] = vet[i3++];
	for (j=i; j<=f; j++)
		vet[j] = aux[j];
}

int main(int argc, char *argv[]) {
	
	double tempo_gasto = 0.0;
	int i, ww, j;
	float media = 0;
	char nome_aquivo[30];
	
	int tempos[] = {500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000};
	
	le_arquivo();
	
	for (j = 0; j < 10; j++){
		i = tempos[j];
		
		sprintf(nome_arquivo, "mergesort_%d.txt", i);
		FILE *arq = fopen(nome_arquivo, "w");
		fprintf(arq, "Tempos de cada execução: ");
		
		for(ww = 0; ww<1000; ww++){
			
			clock_t begin = clock();
			
			MergeSort(0, i);
			
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
