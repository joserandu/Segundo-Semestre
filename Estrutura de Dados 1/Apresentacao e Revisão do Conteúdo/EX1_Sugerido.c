# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

/*
Exercício 1 e 2 - Revisão de Ponteiros
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int *v;  /* Declaração do ponteiro para armazenar um endereço de memória. */
	v = malloc(10 * sizeof(int));
	
	/*
	malloc() -> Função que aloca um bloco de memória de tamanho especificado nos parâmetros.
	10 * sizeof(int) -> sizeof() calcula o tamanho em bytes do parâmetro, que, nesse caso, é de um inteiro. E depois esse valor será multiplicado por 10.
	
	Em suma, esse código atribui ao ponteiro *v um bloco de memória que pode armazenar 10 inteiros.
	*/

}

