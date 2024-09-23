# include <stdio.h>

// 12/2

int main(){
	
	float F=1.5, C=1.1;
	int a = 0;
	
	while (F > C) {
		
		F += 0.02;
		C += 0.03;
		
		a++;
	}
	
	printf("%i", a);
}
