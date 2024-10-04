#include <stdio.h>

// Função recursiva para calcular o somatório dos n primeiros números inteiros
int soma(int n) {
    // Caso base: se n for 0, o somatório é 0
    if (n == 0) {
        return 0;
    }
    // Caso recursivo: somatório de n é n + somatório dos primeiros (n-1) números
    return n + soma(n - 1);
}

// Função recursiva para calcular MOD(x, y)
int mod(int x, int y) {
    // Caso base: Se x for igual a y, o resto é 0
    if (x == y) {
        return 0;
    }
    // Caso base: Se x for menor que y, o resto é x
    if (x < y) {
        return x;
    }
    // Caso recursivo: Se x for maior que y, subtrai y de x e continua a recursão
    return mod(x - y, y);
}

int main() {
    int escolha, n, x, y;

    // Menu de seleção
    printf("Escolha uma das opções:\n");
    printf("1. Calcular o somatório dos n primeiros números inteiros\n");
    printf("2. Calcular MOD(x, y)\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        // Entrada do número n
        printf("Digite um número n: ");
        scanf("%d", &n);
        
        // Chama a função recursiva soma e exibe o resultado
        printf("O somatório dos %d primeiros números inteiros é: %d\n", n, soma(n));
    } else if (escolha == 2) {
        // Entrada dos números x e y
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        printf("Digite o valor de y: ");
        scanf("%d", &y);
        
        // Chama a função recursiva mod e exibe o resultado
        printf("O resultado de MOD(%d, %d) é: %d\n", x, y, mod(x, y));
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}

