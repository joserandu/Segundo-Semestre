# include <stdio.h>
# include <locale.h>

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
    int N, K;
    
   
    printf("Digite um número natural N: ");
    scanf("%d", &N);
    printf("Digite o dígito K: ");
    scanf("%d", &K);
    
    int resultado = contarDigito(N, K);
    printf("O dígito %d ocorre %d vez(es) no número %d.\n", K, resultado, N);
    
    return 0;
}

