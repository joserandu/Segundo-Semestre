#include <stdio.h>
#include <locale.h>

#define TAM_MAX 100

int main() {
    setlocale(LC_ALL, "Portuguese");

    int L[TAM_MAX] = {0}; // Inicializa o array com zeros
    char c;
    int i;

    printf("Opções: Inserir(i); Exibir lista(e); Sair(s): ");
    scanf(" %c", &c); // Note o espaço antes de %c

    while (c != 's') {
        i = 0;
        // Contador
        while (i < TAM_MAX && L[i] != 0) {
            i++;
        }

        // Exibir
        if (c == 'e') {
            if (i == 0) {
                printf("A lista está vazia!\n");
            } else {
                for (int j = 0; j < i; j++) {
                    printf("%i: %i \n", j, L[j]);
                }
            }
            printf("Opções: Inserir(i); Remover o primeiro item(r); Exibir lista(e); Sair(s): ");
            scanf(" %c", &c);
        } else if (c == 'i') {
            if (i < TAM_MAX) {
                printf("Número: ");
                scanf("%i", &L[i]);
            } else {
                printf("A lista está cheia!\n");
            }
            printf("Opções: Inserir(i); Remover o primeiro item(r); Exibir lista(e); Sair(s): ");
            scanf(" %c", &c);
        } else if (c == 'r') {
            if (i > 0) {
                for (int j = 1; j < i; j++) {
                    L[j - 1] = L[j];
                }
                L[i - 1] = 0; // Limpa o último elemento
            } else {
                printf("A lista está vazia!\n");
            }
            printf("Opções: Inserir(i); Remover o primeiro item(r); Exibir lista(e); Sair(s): ");
            scanf(" %c", &c);
        }
    }

    return 0;
}
