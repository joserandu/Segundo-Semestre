#include <stdio.h>

// Fun��o recursiva para calcular o somat�rio dos n primeiros n�meros inteiros
int soma(int n) {
    // Caso base: se n for 0, o somat�rio � 0
    if (n == 0) {
        return 0;
    }
    // Caso recursivo: somat�rio de n � n + somat�rio dos primeiros (n-1) n�meros
    return n + soma(n - 1);
}

// Fun��o recursiva para calcular MOD(x, y)
int mod(int x, int y) {
    // Caso base: Se x for igual a y, o resto � 0
    if (x == y) {
        return 0;
    }
    // Caso base: Se x for menor que y, o resto � x
    if (x < y) {
        return x;
    }
    // Caso recursivo: Se x for maior que y, subtrai y de x e continua a recurs�o
    return mod(x - y, y);
}

int main() {
    int escolha, n, x, y;

    // Menu de sele��o
    printf("Escolha uma das op��es:\n");
    printf("1. Calcular o somat�rio dos n primeiros n�meros inteiros\n");
    printf("2. Calcular MOD(x, y)\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        // Entrada do n�mero n
        printf("Digite um n�mero n: ");
        scanf("%d", &n);
        
        // Chama a fun��o recursiva soma e exibe o resultado
        printf("O somat�rio dos %d primeiros n�meros inteiros �: %d\n", n, soma(n));
    } else if (escolha == 2) {
        // Entrada dos n�meros x e y
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        printf("Digite o valor de y: ");
        scanf("%d", &y);
        
        // Chama a fun��o recursiva mod e exibe o resultado
        printf("O resultado de MOD(%d, %d) �: %d\n", x, y, mod(x, y));
    } else {
        printf("Op��o inv�lida!\n");
    }

    return 0;
}

