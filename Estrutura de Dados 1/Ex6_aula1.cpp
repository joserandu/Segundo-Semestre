# include <stdio.h>

// 6

/*
É errado escrever num=10 na estrutura condicional porque está sendo feita uma atribuição na variável num ao invés de estar sendo feita uma comparação, a qual seria feita com dois sinais de igualdade (==).
Com isso, o bloco do if será sempre executado, pois a atribuição não mostra um pré-requisito para a execução do bloco.	
*/

int main() {
	int num=5;
	
	if (num=10) {
		printf("Bloco if execultado");
	}
}
