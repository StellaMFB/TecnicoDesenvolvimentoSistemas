#include <stdio.h>
#include <stdlib.h>
int main(){
	float vreal, cotat, vdol;
	printf("Este é um programa que informa um valor em reais em dólares\n");
	printf("Informe o valor em reais desejado\n");
	scanf("%f", &vreal);
	printf("Informe a cotação atual do dólar\n");
	scanf("%f", &cotat);
	vdol=vreal/cotat;
	printf("O valor em dólares é de: %f\n",vdol);
	system("pause");
	

	
	
}
