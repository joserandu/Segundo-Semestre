#include <stdio.h>
#include <locale.h>

#define TAM_MAX 100

int main() {
    setlocale(LC_ALL, "Portuguese");

    int L[TAM_MAX] = {0}; // Inicializa o array com zeros
    char c;
    int i;

    printf("-----------------------------\nMENU:\n-----------------------------\nInserir(i); \nRemover um item(r); \nExibir pilha(e);\nVerificar situa��o da pilha(v);\nLocalizar um elemento(l) \nSair(s)\n->");
    scanf(" %c", &c);

    while (c != 's') {
        i = 0;
        // Contador
        while (i < TAM_MAX && L[i] != 0) {
            i++;
        }

        // Exibir
        if (c == 'e') {
            if (i == 0) {
                printf("A lista est� vazia!\n");
            } else {
                for (int j = 0; j < i; j++) {
                    printf("%i: %i \n", j, L[j]);
                }
            }
            
        } 
		
		// Inserir
		else if (c == 'i') {
            if (i < TAM_MAX) {
                printf("N�mero: ");
                scanf("%i", &L[i]);
            } else {
                printf("A lista est� cheia!\n");
            }
            
        } 
		
		// Remover o primeiro elemento
		else if (c == 'r') {
            if (i > 0) {
                for (int j = 1; j < i; j++) {
                    L[j - 1] = L[j];
                }
                L[i - 1] = 0; // Limpa o �ltimo elemento
            } else {
                printf("A lista est� vazia!\n");
            }
  			
	    // Verificar situa��o da lista
        } else if (c == 'v') {
        	printf("A pilha tem %d elementos e ela suporta at� %d.\n", i, TAM_MAX);
		}
		
		// Localizando um elemento
		
		else if (c == 'l') {
			int p;
			
			printf("Digite o elemento para pesquisar: ");
			scanf("%i", &p);
			fflush(stdin);
			
			for (int j = 0; j <= i; j++) {
				if (p == L[j]) {
					printf("%d existe na lista e est� na posi��o %d.\n", p, j);
				}
			}
		}
  			
			printf("-----------------------------\nMENU:\n-----------------------------\nInserir(i); \nRemover um item(r); \nExibir pilha(e);\nVerificar situa��o da pilha(v);\nLocalizar um elemento(l) \nSair(s)\n->");
            scanf(" %c", &c);
        }

    return 0;
    
}

