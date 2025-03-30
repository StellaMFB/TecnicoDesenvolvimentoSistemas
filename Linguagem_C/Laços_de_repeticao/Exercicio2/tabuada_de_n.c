#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, coluna = 1, tabuada;
	scanf("%i",&n);
	
	for(int coluna = 1; coluna<=10; coluna++){
		tabuada = n * coluna;
		printf("%i ", tabuada);
	}
}
