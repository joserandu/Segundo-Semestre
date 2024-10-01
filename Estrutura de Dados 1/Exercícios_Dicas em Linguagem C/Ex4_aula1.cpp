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
		printf("A figura não é um triângulo.");
	} else {
		if (A == B && B == C) {
			printf("O triangulo é equilátero.");
		} else if (A == B || B == C || A == C) {
			printf("O trigulo é isóceles.");
		} else {
			printf("O triangulo é escaleno.");
		}
	}
	
}

