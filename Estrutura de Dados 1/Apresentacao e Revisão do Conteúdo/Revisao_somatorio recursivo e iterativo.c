# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

/*
Crie um programa em C para calcular a soma dos números inteiros
entre 1 e n, onde n é fornecido pelo usuário como entrada.

Crie duas funções soma (uma recursiva e a outra não recursiva)
que recebe como parâmetro de entrada o número lido.
*/

int soma_r(int);
int soma_i(int);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	//int contador;
	
	printf("Digite um número para ser iterado: ");
	scanf("%d", &n);
	fflush(stdin);
	
	printf("Resultado Recursivo: %d\t\t", soma_r(n));
	
	printf("Resultado Iterado: %d", soma_i(n));
	
}

int soma_r(int n){
	
	if (n == 0) {
		;
	} else {
	
	return (n + soma_r(n - 1));
	
	}
}

int soma_i(int n) {
	
	int i;
	int contador = 0;
	
	for (i = 1; i<=n; i++) {
		contador += i;
	}
	
	return contador;
}

