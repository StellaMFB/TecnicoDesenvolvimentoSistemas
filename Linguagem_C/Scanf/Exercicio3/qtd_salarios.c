#include <stdio.h>
#include <stdlib.h>
int main(){
	float salario, qsalmin;
	printf("Este � um programa que mostra a quantidade de sal�rios m�nimos que um funcion�rio ganha, com base no seu sal�rio e valor do sal�rio m�nimo atuais\n");
	printf("Informe o valor do sal�rio  do funcion�rio\n");
	scanf("%f", &salario);
	qsalmin=(salario/1320);
	printf("O funcion�rio ganha %f sal�rios m�nimos\n",qsalmin);
	system("pause");
}
