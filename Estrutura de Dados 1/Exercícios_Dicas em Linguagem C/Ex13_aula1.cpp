#include <stdio.h>

int main() {
   
   int d, m = 0, a;
   
   while (d < 1 || d > 31) {
   	
   		printf("Dia: ");
   		scanf("%d", &d);
   		fflush(stdin);
   
  		if (d < 1 || d > 31) {
   			printf("Erro: Digite um número entre 1 e 31!\n");
   		}	
   }
   
   while (m < 1 || m > 12) {
   	
   		printf("Mês: ");
   		scanf("%d", &m);
   		fflush(stdin);
   		
   		if (m < 1 || m > 12) {
   			printf("Erro: Digite um mês válido entre 1 e 12!\n");
		}
   	
   }
   
   while (a < 1900 || a > 2100) {
   		
   		printf("Ano: ");
    	scanf("%d", &a);
    	fflush(stdin);
    	
    	if (a < 1900 || a > 2100) {
    		printf("Erro: Digite um ano válido entre 1900 e 2100!\n");
		}
   }
   
   printf("Data: %d/%d/%d.", d, m, a);
   
}
