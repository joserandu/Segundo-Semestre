# include <stdio.h>

int fat(int n) {
	if (n == 0)
		return 1;
	else
		return (n * fat(n-1));
}

int main(){
	
	// Forma recursiva
	int n = 5;
	
	printf("%d ", fat(n));
	
	/*As definições matemáticas são recursivas.*/
	
	// Forma iterativa (mais rápida e não usa stack
	int result=1;

	if (n != 0) {
		for (int i; i<=n; i++) {
	
		result = result * i;
		
		}	
 	}
		
	printf("\n%d ", result);
	
}

// Esse método é muito bom, mas se for com números muito grandes, como o 100, vai travar a máquina, por dar overflow
