#include <stdio.h>

// 7

int main(){
	float N, h;
	
	printf("DIgite o valor de N: ");
	scanf("%f", &N);
	
	for (float i = 1; i<=N; i++){
		h = h + 1/i;
	}
	
	printf("%f", h);
}
