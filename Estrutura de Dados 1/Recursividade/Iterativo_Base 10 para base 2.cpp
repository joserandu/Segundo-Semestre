# include <stdio.h>
# include <locale.h>

void decimalParaBinario(int n) {
		
    int binario[32]; 
    int i = 0;

    
    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binário: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Modo Iterativo\n");
	
    int num;
    printf("Digite um número decimal: ");
    scanf("%d", &num);

    decimalParaBinario(num);

    return 0;
}

