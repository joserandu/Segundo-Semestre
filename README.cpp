#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
Exercício "Agenda de Contatos"
*/

#define TAM 100

struct contato {
    char nome[TAM];
    char email[TAM];
    char telefone[20];
    char aniversario[11];
};

typedef struct contato contato;

// Função para limpar o buffer de entrada
void flush_in() {
    int ch;
    while ((ch = getchar()) != EOF && ch != '\n');
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Bem-vindo(a) à sua agenda de contatos!\n");

    int r = 0, j, r_AltD, r_AltD2;
    contato contatos[50];
    int i = 0;

    while (r != 6) {
        
        printf("Selecione a opção do que você deseja fazer:\n");
        printf("\n1 - Cadastrar novo contato\n");
        printf("2 - Alterar dados de um contato\n");
        printf("3 - Excluir dados de um contato\n");
        printf("4 - Exibir dados de um contato específico\n");
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

                    printf("Aniversário (dd/mm/yyyy): ");
                    fgets(contatos[i].aniversario, 11, stdin);
                    contatos[i].aniversario[strcspn(contatos[i].aniversario, "\n")] = 0;

                    i++;
                } else {
                    printf("Agenda cheia! Não é possível adicionar mais contatos.\n");
                }
                break;

            // Alterar dados
            case 2:
            	
            	if (i > 0) {
				
	                printf("Selecione o contato que você deseja alterar:\n");
	                for (j = 0; j < i; j++) {
	                    printf("%d - %s\n", j, contatos[j].nome);
	                }
	
	                scanf("%d", &r_AltD);
	                flush_in();
	
	                printf("Indique o número do campo você deseja alterar:\n1 - Nome \n2 - Email \n3 - Telefone \n4 - Aniversário\n");
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
	                        printf("Aniversário (dd/mm/yyyy): ");
	                        fgets(contatos[r_AltD].aniversario, 11, stdin);
	                        contatos[r_AltD].aniversario[strcspn(contatos[r_AltD].aniversario, "\n")] = 0;
	                        printf("Data de aniversário atualizada com sucesso!\n");
	                        break;
	                    default:
	                        printf("Opção inválida!\n");
	                        break;
	                }
	                break;
		        
				} else {
					printf("Não há nenhum contato na agenda para ser atualizado!\n\n");
				}
				
            // Excluir dados
            case 3:
                printf("Digite o número contato que você deseja excluir:\n");
                
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
                
				printf("Contato excluído com sucesso!\n");
			    
				} else {
                    	printf("Esse contato não existe!\n");     
                }
                
                
                    break;

            // Exibir dados de um contato específico
            case 4:
                printf("Selecione o contato que você deseja visualizar: \n");
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
                    printf("Aniversário: %s\n", contatos[visualizar].aniversario);
                } else {
                    printf("Número de contato inválido!\n");
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
	                    printf("Aniversário: %s\n", contatos[j].aniversario);
	                }
	                
                } else {
               	    printf("Não existem contatos registrados na agenda!\n");
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
					fprintf(file, "Aniversário: %s\n\n", contatos[j].aniversario);
				}
                
                fclose(file);
                
                printf("Arquivo `DATA.txt` foi criado com sucesso e está com os seus contatos!");
                break;

            // Tratamento de erros
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }
    
    //fopen()

    return 0;
}
