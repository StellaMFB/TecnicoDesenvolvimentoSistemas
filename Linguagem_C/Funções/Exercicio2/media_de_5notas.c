#include <stdio.h>
#include <stdlib.h>

 

void le_notas();
void calcula_media(float, float, float, float, float);
void devolve_media(float);

 

int main(){
	le_notas();
}

 

void le_notas(){
	float nota1, nota2, nota3, nota4, nota5;
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&nota3);
	
	printf("Digite a quarta nota: ");
	scanf("%f",&nota4);
	
	printf("Digite a quinta nota: ");
	scanf("%f",&nota5);
	
	calcula_media(nota1, nota2, nota3, nota4, nota5);
}

void calcula_media(float nota1, float nota2, float nota3, float nota4, float nota5){
	float media;
	media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
	devolve_media(media);
}

void devolve_media(float media){
	printf("A media das notas é de %f",media);
}

