# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

/*
Crie um programa em C para calcular a soma dos n�meros inteiros
entre 1 e n, onde n � fornecido pelo usu�rio como entrada.

Crie duas fun��es soma (uma recursiva e a outra n�o recursiva)
que recebe como par�metro de entrada o n�mero lido.
*/

int soma_r(int);
int soma_i(int);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	//int contador;
	
	printf("Digite um n�mero para ser iterado: ");
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

