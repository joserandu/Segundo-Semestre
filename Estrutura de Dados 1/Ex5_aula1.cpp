# include <stdio.h>

int main() {
	
	int A;
	
	printf("A: ");
	scanf("%i", &A);
	
	if (A == 0) {
		printf("'0' n�o � um n�mero nulo.");
	} else if (A % 2 == 0) {
		printf("%i � par ", A);
	} else {
		printf("%i � impar ", A);
	}
	
	if (A > 0) {
		printf("e positivo.");
	} else if (A < 0) {
		printf("e negativo.");
	} else {
		;
	}
	
}

