# include <stdio.h>

int main() {
	
	float A, B, C;
	
	printf("A: ");
	scanf("%f", &A);
	printf("B: ");
	scanf("%f", &B);
	printf("C: ");
	scanf("%f", &C);
	
	if (A + B < C || B + C < A || A + C < B) {
		printf("A figura n�o � um tri�ngulo.");
	} else {
		if (A == B && B == C) {
			printf("O triangulo � equil�tero.");
		} else if (A == B || B == C || A == C) {
			printf("O trigulo � is�celes.");
		} else {
			printf("O triangulo � escaleno.");
		}
	}
	
}

