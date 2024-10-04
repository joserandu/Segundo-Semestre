# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

/*
Exercício de Recursividade
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

