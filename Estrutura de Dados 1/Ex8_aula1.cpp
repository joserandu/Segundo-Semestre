# include <stdio.h>

int main(){
	
	int N, f=1;
	
	printf("DIgite o valor de N: ");
	scanf("%i", &N);
	
	for (int i = 1; i<=N; i++){
		f *= i;
	}
	
	printf("%d", f);
	
}
