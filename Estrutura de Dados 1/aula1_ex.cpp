# include <stdio.h>
# include <string.h>

int main() {
	
	float h, PId;
	char s;
	
	printf("Altura: ");
	scanf("%f", &h);
	
	printf("Sexo (H ou M): ");
	scanf("%f", &s);
	
	PId = 72.7*h - 58;
	
	printf("Seu peso ideal é: %.2f kg.", PId);
	
}
