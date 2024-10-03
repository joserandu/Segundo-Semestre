# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

/*
Exerc�cio 1 e 2 - Revis�o de Ponteiros
*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int *v;  /* Declara��o do ponteiro para armazenar um endere�o de mem�ria. */
	v = malloc(10 * sizeof(int));
	
	/*
	malloc() -> Fun��o que aloca um bloco de mem�ria de tamanho especificado nos par�metros.
	10 * sizeof(int) -> sizeof() calcula o tamanho em bytes do par�metro, que, nesse caso, � de um inteiro. E depois esse valor ser� multiplicado por 10.
	
	Em suma, esse c�digo atribui ao ponteiro *v um bloco de mem�ria que pode armazenar 10 inteiros.
	*/

}

