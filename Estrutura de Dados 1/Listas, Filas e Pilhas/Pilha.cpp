#include <stdio.h>
#include <locale.h>

#define TAM_MAX 100

int main() {
    setlocale(LC_ALL, "Portuguese");

    int P[TAM_MAX] = {0}; 
    char c;
    int i;

    printf("-----------------------------\nMENU:\n-----------------------------\nInserir(i); \nRemover um item(r); \nExibir pilha(e);\nVerificar situa��o da pilha(v);\nLocalizar um elemento(l) \nSair(s)\n->");
    scanf(" %c", &c); 
    fflush(stdin);
    
    while (c != 's') {
        i = 0;
        
        // Contador
        while (i < TAM_MAX && P[i] != 0) {
            i++;
        }

        // Exibir
        if (c == 'e') {
            if (i == 0) {
                printf("A pilha est� vazia!\n");
            } else {
                for (int j = 0; j < i; j++) {
                    printf("%i: %i \n", j, P[j]);
                }
            }
            
        // Inserir    
        } else if (c == 'i') {
            if (i < TAM_MAX) {
                int r;
                
                printf("Voc� deseja inserir um valor no final ou em outra parte da pilha? \n1 - Final\n2 - Outra parte\n->");
                scanf("%i", &r);
                fflush(stdin);
                
                switch (r) {
                    case 1:
                        printf("Digite o n�mero que deseja inserir: ");
                        scanf("%i", &P[i]);
                        fflush(stdin);
                        printf("%d foi inserido ao final com sucesso e est� na posi��o %d\n", P[i], i);
                        break;
                    case 2:
                        int p;
                        int c;                    
                        
                        printf("Digite a posi��o que voc� deseja inserir: ");
                        scanf("%i", &p);
                        fflush(stdin);
                        
                        if (p <= i) {
                            printf("A pilha j� est� preenchida na posi��o %d com o valor %d, deseja mudar?\n1 - Sim\n2 - N�o\n->", p, P[p]);
                            scanf("%i", &c);
                            fflush(stdin);
                            
                            if (c == 1) {
                                printf("Digite o novo valor: ");
                                scanf("%i", &P[p]);
                                fflush(stdin);
                            
                                printf("%d foi adicionado com sucesso!\n", P[p]);
                            } else {
                                ;
                            }
                        } else if (p == i) {
                            printf("Digite o novo valor: ");
                            scanf("%i", &P[p]);
                            fflush(stdin);
                            
                            printf("%d foi adicionado com sucesso!\n", P[p]);
                        } else {
                            printf("Posi��o inv�lida!\n");
                        }
                        break;
                    default:
                        printf("Op��o inv�lida! (Digite 1 ou 2)\n");
                        break;    
                }
            } else {
                printf("A pilha est� cheia!\n");
            }
            
        // Remover
        } else if (c == 'r') {
            
            if (i == 0) {
                printf("A pilha est� vazia!\n");
            } else {
                int v;
                
                printf("Escolha o valor que voc� deseja remover: ");
                
                for (int j = 0; j < i; j++) {
                    printf("%i: %i \n", j, P[j]);
                }
                
                printf("->");
                scanf("%i", &v);
                fflush(stdin);

                // Encontrar o �ndice do valor a ser removido
                int pos = -1;
                for (int j = 0; j < i; j++) {
                    if (P[j] == v) {
                        pos = j;
                        break;
                    }
                }

                // Remover o elemento e ajustar a pilha
                if (pos != -1) {
                    for (int j = pos; j < i - 1; j++) {
                        P[j] = P[j + 1];
                    }
                    P[i - 1] = 0; // Limpar o �ltimo elemento
                    printf("O valor %d foi removido com sucesso!\n", v);
                } else {
                    printf("Valor n�o encontrado na pilha!\n");
                }
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
            
            int found = 0;
            for (int j = 0; j < i; j++) {
                if (p == P[j]) {
                    printf("%d existe na lista e est� na posi��o %d.\n", p, j);
                    found = 1;
                }
            }
            if (!found) {
                printf("%d n�o foi encontrado na pilha.\n", p);
            }
        }
        
        // Tratamento de erros
        else {
            printf("Digite um caractere v�lido!\n");
        }
        
        printf("-----------------------------\nMENU:\n-----------------------------\nInserir(i); \nRemover um item(r); \nExibir pilha(e);\nVerificar situa��o da pilha(v);\nLocalizar um elemento(l) \nSair(s)\n->");
        scanf(" %c", &c);
        fflush(stdin);
    }

    return 0;
}

