#include <stdio.h>

#define MAX 100

int fila[MAX];
int frente = 0;
int tras = -1;

void inicializa() {
    frente = 0;
    tras = -1;
}

int estaVazia() {
    return frente > tras;
}

int estaCheia() {
    return tras == MAX - 1;
}

void enfileira(int valor) {
    if (estaCheia()) {
        printf("Fila cheia! Não é possível adicionar o elemento.\n");
    } else {
        fila[++tras] = valor;
        printf("Elemento %d adicionado na fila.\n", valor);
    }
}

void desenfileira() {
    if (estaVazia()) {
        printf("Fila vazia! Não é possível remover elemento.\n");
    } else {
        printf("Elemento %d removido da fila.\n", fila[frente++]);
    }
}

void exibeFila() {
    if (estaVazia()) {
        printf("Fila vazia!\n");
    } else {
        printf("Posição : Elemento\n");
        for (int i = frente; i <= tras; i++) {
            printf("   %d    :    %d\n", i, fila[i]);
        }
        printf("\n");
    }
}

int main() {
    int opcao, valor;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Adicionar elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Exibir fila\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser adicionado: ");
                scanf("%d", &valor);
                enfileira(valor);
                break;
            case 2:
                desenfileira();
                break;
            case 3:
                exibeFila();
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
