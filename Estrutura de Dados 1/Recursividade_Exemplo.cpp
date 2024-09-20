# include <stdio.h>

int fat(int n) {
	if (n == 0)
		return 1;
	else
		return (n * fat(n-1));
}

int main(){
	int n = 5;
	
	printf("%d ", fat(n));
}

// Esse método é muito bom, mas se for com números muito grandes, como o 100, vai travar a máquina, por dar overflow
