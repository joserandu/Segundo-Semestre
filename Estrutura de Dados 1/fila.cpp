# include <stdio.h>
# include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int L[100];
	char c = 'e';
	int i = 0;
	
	printf("Opções: Inserir(i); Exibir lista(e); Sair(s): ");
	scanf("%c", &c);
	fflush(stdin);
	
	while (c != 's') {
		
		int i = 0;

		// Contador
		while (L[i] != L[101]) {
			i++;
		} 

		// Exibir

		if (c == 'e') {
			
			if (L[0] == L[101]) {
				printf("A lista está vazia!\n");
	
				printf("Opções: Inserir(i); Sair(s): ");
				scanf("%c", &c);
				fflush(stdin);
	
			} else {
				for (int j=0; j<i; j++) {
					printf("%i: %i \n", j, L[j]);
				}
			}
		
			printf("Opções: Inserir(i); Remover o primeiro item(r); Exibir lista(e); Sair(s): ");
			scanf("%c", &c);
			fflush(stdin);
			
		} else 
		
		// Inserir
		
		if (c == 'i') {
			
			printf("Número: ");
			scanf("%d", &L[i]);
			fflush(stdin);
			
			printf("Opções: Inserir(i); Remover o primeiro item(r); Exibir lista(e); Sair(s): ");
			scanf("%c", &c);
			fflush(stdin);
			
		} else
		
		// Remover
		
		if (c == ''))
		

	}
	
	
	// Remover o primeiro valor
	
	// Mostrar os elementos da fila com as suas posições e se a fila estiver vazia, retornar -1;
}
