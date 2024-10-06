# include <stdio.h>
# include <locale.h>

/*
Implemente uma fun��o recursiva soma(n) que calcula o somat�rio
dos n primeiros n�meros inteiros.
Pode-se calcular o resto da divis�o, MOD, de x por y, dois n�meros
inteiros positivos, usando-se a seguinte defini��o:

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

    
    printf("Escolha uma das op��es:\n");
    printf("1. Calcular o somat�rio dos n primeiros n�meros inteiros\n");
    printf("2. Calcular MOD(x, y)\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
       
        printf("Digite um n�mero n: ");
        scanf("%d", &n);
        
        
        printf("O somat�rio dos %d primeiros n�meros inteiros �: %d\n", n, soma(n));
    } else if (escolha == 2) {
       
        printf("Digite o valor de x: ");
        scanf("%d", &x);
        printf("Digite o valor de y: ");
        scanf("%d", &y);
        
        
        printf("O resultado de MOD(%d, %d) �: %d\n", x, y, mod(x, y));
    } else {
        printf("Op��o inv�lida!\n");
    }

    return 0;
}

