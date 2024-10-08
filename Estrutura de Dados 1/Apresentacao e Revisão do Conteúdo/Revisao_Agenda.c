#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
Implementar em linguagem C uma aplica��o que simule uma agenda de
contatos, onde dever�o ser cadastrados contatos com as seguintes
informa��es: Nome do contato, e-mail do contato, n�mero do telefone do
contato (contendo informa��o de c�digo regional), data de anivers�rio do
contato.

Seu programa dever� exibir atrav�s de um menu as seguintes op��es: 1-
para cadastrar novo contato; 2-para alterar dados de um contato; 3-para
excluir os dados de um contato; 4 para exibir os dados de um contato
espec�fico; 5-para exibir os dados de todos os contatos; 6-para sair da
aplica��o.

Os dados dos contatos dever�o ser armazenados no arquivo DATA.TXT
*/

#define TAM 100

struct contato {
    char nome[TAM];
    char email[TAM];
    char telefone[20];
    char aniversario[11];
};

typedef struct contato contato;

// Fun��o para limpar o buffer de entrada
void flush_in() {
    int ch;
    while ((ch = getchar()) != EOF && ch != '\n');
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Bem-vindo(a) � sua agenda de contatos!\n");

    int r = 0, j, r_AltD, r_AltD2;
    contato contatos[50];
    int i = 0;

    while (r != 6) {
        
        printf("Selecione a op��o do que voc� deseja fazer:\n");
        printf("\n1 - Cadastrar novo contato\n");
        printf("2 - Alterar dados de um contato\n");
        printf("3 - Excluir dados de um contato\n");
        printf("4 - Exibir dados de um contato espec�fico\n");
        printf("5 - Exibir os dados de todos os contatos\n");
        printf("6 - Sair\n");

        printf("Resposta: ");
        scanf("%d", &r);
        flush_in(); // Limpa o buffer de entrada

        switch (r) {
            // Cadastrar
            case 1:
                if (i < 50) {
                    printf("Nome: ");
                    fgets(contatos[i].nome, TAM, stdin);
                    contatos[i].nome[strcspn(contatos[i].nome, "\n")] = 0;

                    printf("Email: ");
                    fgets(contatos[i].email, TAM, stdin);
                    contatos[i].email[strcspn(contatos[i].email, "\n")] = 0;

                    printf("Telefone: ");
                    fgets(contatos[i].telefone, 20, stdin);
                    contatos[i].telefone[strcspn(contatos[i].telefone, "\n")] = 0;

                    printf("Anivers�rio (dd/mm/yyyy): ");
                    fgets(contatos[i].aniversario, 11, stdin);
                    contatos[i].aniversario[strcspn(contatos[i].aniversario, "\n")] = 0;

                    i++;
                } else {
                    printf("Agenda cheia! N�o � poss�vel adicionar mais contatos.\n");
                }
                break;

            // Alterar dados
            case 2:
            	
            	if (i > 0) {
				
	                printf("Selecione o contato que voc� deseja alterar:\n");
	                for (j = 0; j < i; j++) {
	                    printf("%d - %s\n", j, contatos[j].nome);
	                }
	
	                scanf("%d", &r_AltD);
	                flush_in();
	
	                printf("Indique o n�mero do campo voc� deseja alterar:\n1 - Nome \n2 - Email \n3 - Telefone \n4 - Anivers�rio\n");
	                scanf("%d", &r_AltD2);
	                flush_in();
	
	                switch (r_AltD2) {
	                    case 1:
	                        printf("Nome: ");
	                        fgets(contatos[r_AltD].nome, TAM, stdin);
	                        contatos[r_AltD].nome[strcspn(contatos[r_AltD].nome, "\n")] = 0;
	                        printf("Nome atualizado com sucesso!\n");
	                        break;
	                    case 2:
	                        printf("Email: ");
	                        fgets(contatos[r_AltD].email, TAM, stdin);
	                        contatos[r_AltD].email[strcspn(contatos[r_AltD].email, "\n")] = 0;
	                        printf("Email atualizado com sucesso!\n");
	                        break;
	                    case 3:
	                        printf("Telefone: ");
	                        fgets(contatos[r_AltD].telefone, 20, stdin);
	                        contatos[r_AltD].telefone[strcspn(contatos[r_AltD].telefone, "\n")] = 0;
	                        printf("Telefone atualizado com sucesso!\n");
	                        break;
	                    case 4:
	                        printf("Anivers�rio (dd/mm/yyyy): ");
	                        fgets(contatos[r_AltD].aniversario, 11, stdin);
	                        contatos[r_AltD].aniversario[strcspn(contatos[r_AltD].aniversario, "\n")] = 0;
	                        printf("Data de anivers�rio atualizada com sucesso!\n");
	                        break;
	                    default:
	                        printf("Op��o inv�lida!\n");
	                        break;
	                }
	                break;
		        
				} else {
					printf("N�o h� nenhum contato na agenda para ser atualizado!\n\n");
				}
				
            // Excluir dados
            case 3:
                printf("Digite o n�mero contato que voc� deseja excluir:\n");
                
                for (j = 0; j < i; j++) {
                    printf("%d - %s\n", j, contatos[j].nome);
                }
                
                int excluir;
                scanf("%d", &excluir);
                flush_in();

                if (excluir >= 0 && excluir < i) {
                    
					for (j = excluir; j < i - 1; j++) {
                        contatos[j] = contatos[j + 1];
                            
                    } 
                    i--;
                
				printf("Contato exclu�do com sucesso!\n");
			    
				} else {
                    	printf("Esse contato n�o existe!\n");     
                }
                
                
                    break;

            // Exibir dados de um contato espec�fico
            case 4:
                printf("Selecione o contato que voc� deseja visualizar: \n");
                for (j = 0; j < i; j++) {
                    printf("%d - %s\n", j, contatos[j].nome);
                }

                int visualizar;
                scanf("%d", &visualizar);
                flush_in();

                if (visualizar >= 0 && visualizar < i) {
                    printf("\nContato %d:\n", visualizar + 1);
                    printf("Nome: %s\n", contatos[visualizar].nome);
                    printf("Email: %s\n", contatos[visualizar].email);
                    printf("Telefone: %s\n", contatos[visualizar].telefone);
                    printf("Anivers�rio: %s\n", contatos[visualizar].aniversario);
                } else {
                    printf("N�mero de contato inv�lido!\n");
                }
               
                break;

            // Exibir dados de todos os contatos
            case 5:
            	
            	if (i > 0) {
				
	                for (j = 0; j < i; j++) {
	                    printf("\nContato %d:\n", j + 1);
	                    printf("Nome: %s\t", contatos[j].nome);
	                    printf("Email: %s\t", contatos[j].email);
	                    printf("Telefone: %s\t", contatos[j].telefone);
	                    printf("Anivers�rio: %s\n", contatos[j].aniversario);
	                }
	                
                } else {
               	    printf("N�o existem contatos registrados na agenda!\n");
			    }
                    break;

            // Sair
            case 6:
                printf("Contatos registrados com sucesso!\n\n");
                
                FILE *file = fopen("DATA.txt", "w");
                
                if (file == NULL) {
                	printf("Erro ao abrir arquivo!");
                	return 1;
				}
				
				for (j = 0; j < i; j++) {
					fprintf(file, "Contato %d:\n", j + 1);
					fprintf(file, "Nome: %s\t", contatos[j].nome);
					fprintf(file, "Email: %s\t", contatos[j].email);
					fprintf(file, "Telefone: %s\t", contatos[j].telefone);
					fprintf(file, "Anivers�rio: %s\n\n", contatos[j].aniversario);
				}
                
                fclose(file);
                
                printf("Arquivo `DATA.txt` foi criado com sucesso e est� com os seus contatos!");
                break;

            // Tratamento de erros
            default:
                printf("Op��o inv�lida! Tente novamente.\n");
                break;
        }
    }

    return 0;
}

