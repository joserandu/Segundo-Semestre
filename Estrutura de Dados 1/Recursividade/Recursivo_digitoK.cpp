# include <stdio.h>
# include <locale.h>

/*
Escreva uma fun��o recursiva que determine quantas vezes um
d�gito K ocorre em um n�mero natural N.
*/

int contarDigito(int N, int K) {
    
    if (N == 0 && K == 0) {
        return 1;
    }
    
    if (N == 0) {
        return 0;
    }
    
    
    if (N % 10 == K) {
        return 1 + contarDigito(N / 10, K);
    } else {
        return contarDigito(N / 10, K);
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int N, K;
    
   
    printf("Digite um n�mero natural N: ");
    scanf("%d", &N);
    printf("Digite o d�gito K: ");
    scanf("%d", &K);
    
    int resultado = contarDigito(N, K);
    printf("O d�gito %d ocorre %d vez(es) no n�mero %d.\n", K, resultado, N);
    
    return 0;
}

