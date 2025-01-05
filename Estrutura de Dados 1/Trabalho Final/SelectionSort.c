#include <stdio.h>
#include <stdlib.h>     /* necess?rio p/ as fun??es rand() e srand() */
#include <time.h>   	/* for clock_t, clock(), CLOCKS_PER_SEC      */

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
	int i, j;
	int min, x;
	int ww;
	int tam_ordenar = 5000;  /* quero ordenar apenas tam_ordenar */
		
	le_arquivo(5000);
		
	double time_spent = 0.0; 	/* to store the execution time of code */
	
	clock_t begin = clock();		/* tempo inicial */

	for ( ww=0; ww<1000; ww++) {

		for (i = 0; i < tam_ordenar; i++) {
    		min = i;
    		for (j = i + 1; j < tam_ordenar; j++) {
        		if (vet[j] < vet[min]) {
            	min = j;
        		}
   			}
		    // Troca os elementos
		    x = vet[min];
		    vet[min] = vet[i];
		    vet[i] = x;
		}
		
	}	
		
	clock_t end = clock();		/* tempo final */

	/* 	calculate elapsed time by finding difference (end - begin) and
      		 dividing the difference by CLOCKS_PER_SEC to convert to seconds */
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	printf("\n\nVetor ordenado ==> ");
	for (i=0; i<tam_ordenar; i++){
		printf(" %d ", vet[i]);
	}
	
	printf("\nThe elapsed time is %f seconds", time_spent);
	printf("\n\n");
	
	system ("PAUSE");
	return 0;
}
