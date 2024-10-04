#include <stdio.h>
#include <locale.h>

// Utilizando a maneira recursiva

void decimalParaBinario(int n) {
    if (n > 1) {
        decimalParaBinario(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    printf("Binário: ");
    decimalParaBinario(num);
    printf("\n");

}

