# include <stdio.h>

// 9

int main(){
	
	float C, F;
	
	C = -100.0;
	
	for (int i = 0; i<=200; i++){
		
		F = 9.0/5.0*C + 32;
		
		printf("%.0f | %f\n", C, F);
		
		C += 1;
	}
	
}

