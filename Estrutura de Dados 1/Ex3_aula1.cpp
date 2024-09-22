# include <stdio.h>
# include <math.h>

int main() {
	
	float h, r, A, nLf, V;
	int nLi;
	
	printf("Altura: ");
	scanf("%f", &h);
	printf("Raio: ");
	scanf("%f", &r);
	
	A = 3.14*r*r + 2*3.14*r*h;
	
	nLf = A / 15;
	
	nLi = nLf;
	
	if (nLf - nLi > 0) {
		nLi += 1;
	}
	
	V = nLi * 20;
	
	printf("Quantidade de latas: %d \nValor total: R$ %.0f,00", nLi, V);
	
}

