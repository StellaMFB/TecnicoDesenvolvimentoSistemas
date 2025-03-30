#include <stdio.h>
#include <stdlib.h>
int main(){
	float salario, qsalmin;
	printf("Este é um programa que mostra a quantidade de salários mínimos que um funcionário ganha, com base no seu salário e valor do salário mínimo atuais\n");
	printf("Informe o valor do salário  do funcionário\n");
	scanf("%f", &salario);
	qsalmin=(salario/1320);
	printf("O funcionário ganha %f salários mínimos\n",qsalmin);
	system("pause");
}
