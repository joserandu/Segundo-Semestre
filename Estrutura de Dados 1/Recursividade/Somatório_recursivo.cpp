# include <stdio.h>
# include <locale.h>

/*
Implemente uma função recursiva soma(n) que calcula o somatório
dos n primeiros números inteiros.
Pode-se calcular o resto da divisão, MOD, de x por y, dois números
inteiros positivos, usando-se a seguinte definição:

- MOD(x,y) = MOD(x - y, y) se x > y
- MOD(x,y) = x se x < y
- MOD(x,y) = 0 se x = y
*/

int soma(int n) {
    
    if (n == 0) {
        return 0;
    }
    
    return n + soma(n - 1);
}


int mod(int x, int y) {
    
    if (x == y) {
        return 0;
    }
    
    if (x < y) {
        return x;
    }
    
    return mod(x - y, y);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int escolha, n, x, y;

    
    printf("Escolha uma das opções:\n");
    printf("1. Calcular o somatório dos n primeiros números inteiros\n");
    printf("2. Calcular MOD(x, y)\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
       
        printf("Digite um número n: ");
        scanf("%d", &n);
        
        
        printf("O somatório dos %d primeiros números inteiros é: %d\n", n, soma(n));
    } else if (escolha == 2) {
       
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        printf("Digite o valor de y: ");
        scanf("%d", &y);
        
        
        printf("O resultado de MOD(%d, %d) é: %d\n", x, y, mod(x, y));
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}

