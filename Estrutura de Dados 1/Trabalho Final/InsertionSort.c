#include <stdio.h>
#include <stdlib.h>     /* necess?rio p/ as fun??es rand() e srand() */
#include <time.h>   	/* for clock_t, clock(), CLOCKS_PER_SEC      */
#include <locale.h>

#define TAMANHO 5000
int vet[5000];
FILE *arq;
char filename[30]="arq_teste.txt";


int le_arquivo(int TAM){	/* faz a abertura do arquivo e leitura de uma quantidade de numeros */ 
	int i;
	arq = fopen(filename, "rt");
	if (arq == NULL)
		return(-1);		/* falha na abertura do arquivo */
	else
		{
			/* arquivo aberto com sucesso */
			srand(time(NULL));
			for (i=0; i < 5000; i++){
			
				if (i < TAM - 1) {
	        	   fscanf(arq, "%d,", &vet[i]); // Lê número seguido de uma vírgula
	            } else {
	               fscanf(arq, "%d", &vet[i]); // Lê o último número sem vírgula
	            }
            }
		}
	fclose (arq);
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, x;
	
	double soma, media;
	int ww, n;
	double times[1000];
	FILE *result_file, *result_file_n;

    // Abrir um único arquivo para armazenar os tempos de execução
    result_file = fopen("insertion_sort.txt", "w");
    if (result_file == NULL) {
        printf("Erro ao criar o arquivo de resultados.\n");
        return -1;
    }
    
    // Vetor com os tamanhos de entrada para cada execução
    int tamanhos[] = {500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000};

    // Para cada tamanho de entrada
    for (int size_index = 0; size_index < 10; size_index++) {
        n = tamanhos[size_index];
        
        char nome_arquivo[99];
        
		sprintf(nome_arquivo, "insertion_sort_%d.txt", n);        
        
		// Abrir arquivo para armazenar os tempos de execução de n
	    result_file_n = fopen(nome_arquivo, "w");
	    if (result_file == NULL) {
	        printf("Erro ao criar o arquivo de resultados.\n");
	        return -1;
	    }

        // Escrever no arquivo o tamanho que está sendo executado
        fprintf(result_file, "Tempo da ordenação com %d números:\n", n);
        fprintf(result_file_n, "Tempo da ordenação com %d números:\n", n);

        // Repetir o processo para 1000 execuções
        soma = 0.0; // Resetar soma a cada novo tamanho
		
	
		for (ww=0; ww<1000; ww++) {
			
			le_arquivo(5000);
			
			double time_spent = 0.0; 	/* to store the execution time of code */
		
			clock_t begin = clock();		/* tempo inicial */
	
	
			for (i = 1; i < n; i++) { 
			    x = vet[i];
			    for (j = i; j > 0 && x < vet[j - 1]; j--) { 
	        		vet[j] = vet[j - 1];
	   			}
	    		vet[j] = x;
			}
		
			clock_t end = clock();		/* tempo final */
	
			/* 	calculate elapsed time by finding difference (end - begin) and
		 	dividing the difference by CLOCKS_PER_SEC to convert to seconds */
			time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
		    fprintf(result_file, "%f\n", time_spent);  // Armazenar o tempo da execução

		    fprintf(result_file_n, "%f\n", time_spent);  // Armazenar o tempo da execução no arquivo n
		
			times[ww] = time_spent;
			soma = soma + times[ww];
		}	

		// Média dos tempos
		media = soma / 1000;
	
		printf("Média de tempo (%d números): %f\n", n, media);
	    fprintf(result_file, "Tempo médio: %f\n\n", media);  // APAGAR DEPOISSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS
	    
	    // Arquivo local
		fprintf(result_file_n, "Tempo médio: %f\n\n", media);
	    fclose(result_file_n);
	
	}

    fclose(result_file);  // Fechar o arquivo de resultados
    printf("\n\nExecuções concluídas. Os resultados foram armazenados em 'insertion_sort.txt'.\n");

	system ("PAUSE");
	return 0;
}
