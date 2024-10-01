# include <stdio.h>
# include <math.h>

int main() {
	
	float x1, x2, y1, y2, result;
	
	printf("x1: ");
	scanf("%f", &x1);
	printf("y1: ");
	scanf("%f", &y1);
	printf("x2: ");
	scanf("%f", &x2);
	printf("y2: ");
	scanf("%f", &y2);	
	
	result = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	
	printf("Distancia: %f", result);
	
}

