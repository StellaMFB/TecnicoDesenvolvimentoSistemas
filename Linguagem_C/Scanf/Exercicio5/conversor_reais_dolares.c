#include <stdio.h>
#include <stdlib.h>
int main(){
	float vreal, cotat, vdol;
	printf("Este � um programa que informa um valor em reais em d�lares\n");
	printf("Informe o valor em reais desejado\n");
	scanf("%f", &vreal);
	printf("Informe a cota��o atual do d�lar\n");
	scanf("%f", &cotat);
	vdol=vreal/cotat;
	printf("O valor em d�lares � de: %f\n",vdol);
	system("pause");
	

	
	
}
