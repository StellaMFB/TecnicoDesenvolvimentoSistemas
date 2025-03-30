#include <stdio.h>
#include <stdlib.h>

 

void recebe_valores();
void IMC(float, float);
void devolve_valores(float);

 

int main(){
	recebe_valores();
}

 

void recebe_valores(){
	float peso, altura;
	printf("Digite o seu peso: ");	
	scanf("%f",&peso,"\n");
	printf("Digite a sua altura: ");
	scanf("%f",&altura,"\n");
	if (peso > 0 and altura > 0){
		IMC(peso, altura);
	}
	else{
		recebe_valores();
	}
}

 

void IMC(float peso, float altura){
	float imc;
	imc = peso / (altura*altura);
	devolve_valores(imc);
}

 

void devolve_valores(float imc){
	printf("O IMC é de %f.",imc);
}
