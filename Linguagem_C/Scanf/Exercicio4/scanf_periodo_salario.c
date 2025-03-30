#include <stdio.h>
#include <stdlib.h>
int main(){
	int idade;
	float salario;
	char periodo;
	
	printf("Informe a sua idade\n");
	scanf("%i",&idade);
	
	printf("Informe o seu salario\n");
	scanf("%f",&salario);
	
	printf("Informe o periodo: M para manha, T para tarde e N para noite\n");
    scanf(" %c",&periodo);
    
	printf("Voce tem %i anos!\n",idade);
	printf("Seu salario e %f e o periodo escolhido e %c",salario,periodo);
	
	system("pause");
	
}
