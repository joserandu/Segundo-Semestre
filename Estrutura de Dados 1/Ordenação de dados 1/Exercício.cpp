# include <stdio.h>
# include <stdlib.h>

// Selection sort

// Em qual caso o bubble sort não será n²?

/*
int contarElementos(int v[99]) {
	
	int i;
	
	for (i = 1; i<100 ;i++) {
		if (v[i] != NULL) {
			i++;
		} else {
			break;
		}
	}
	
	return i;
	
}
*/

int bubbleSort(int v[7], int i, int n){
	
	int j, x;
	
	for (i=1; i<n-1; i++) {
	
		for (j=0; j<=n-i; j++) {
			if (v[j] > v[j+1]) {
			x = v[j];
			v[j] = v[j+1];
			v[j+1] = x;
			
			}	
		}
	}
}

int selectionSort(int v[7], int i, int n) {
	
	int min, j, x;
	
	for (i=1; i<n; i++) {
		min = i;
		for (j=i+1; j<=n; j++) {
		
			if (v[j] < v[min])
				min =j;
				
		x = v[min];
		v[min] = v[i];
		v[i] = x;
		
		}
	}
}

int insertionSort(int v[7], int i, int n) {
	
	int x, j;
	
	for (i=2; i<=n; i++) {
		x = v[i];
		for (j=i; j>1 && x<v[j-1]; j--)  // Perceba que o segundo campo tem uma expressão lógica
			v[j] = v[j-1];
		v[j] = x;
		
	}
}

int main(void) {
	
	int v[7];
	int vBubble[7];
	
//	for (int i = 0; i<)
	
	v[7] = 7, 34, 45, 23, 15, 3, 5;
	
	vBubble = bubbleSort(v, 7);

	for (int i = 0; i<=7; i++) {
		printf("%d ", )
	}
	
}
