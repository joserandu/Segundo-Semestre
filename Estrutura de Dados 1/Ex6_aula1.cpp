# include <stdio.h>

// 6

/*
� errado escrever num=10 na estrutura condicional porque est� sendo feita uma atribui��o na vari�vel num ao inv�s de estar sendo feita uma compara��o, a qual seria feita com dois sinais de igualdade (==).
Com isso, o bloco do if ser� sempre executado, pois a atribui��o n�o mostra um pr�-requisito para a execu��o do bloco.	
*/

int main() {
	int num=5;
	
	if (num=10) {
		printf("Bloco if execultado");
	}
}
