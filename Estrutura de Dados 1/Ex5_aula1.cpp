# include <stdio.h>

int main() {
	
	int A;
	
	printf("A: ");
	scanf("%i", &A);
	
	if (A == 0) {
		printf("'0' não é um número nulo.");
	} else if (A % 2 == 0) {
		printf("%i é par ", A);
	} else {
		printf("%i é impar ", A);
	}
	
	if (A > 0) {
		printf("e positivo.");
	} else if (A < 0) {
		printf("e negativo.");
	} else {
		;
	}
	
}

