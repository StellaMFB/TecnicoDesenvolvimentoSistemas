#include <stdio.h>
#include <stdlib.h>

int main(){
	int anat, anasc, idade;

	printf("Este é um programa que informa sua idade com base no ano 				de seu nascimento.\n");
	printf("Digite o ano atual: \n");
	scanf(" %i",&anat,"\n");
	printf("Digite o ano de seu nascimento: \n");
	scanf(" %i",anasc,"\n");
	idade=("%i-%i",anat,anasc);
	printf("Você tem %i anos!",idade);
}
