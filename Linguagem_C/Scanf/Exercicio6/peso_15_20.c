#include <stdio.h>
#include <stdlib.h>
int main(){
	float peso, fut1, fut2;
	
	printf("Este � um programa que informa seu novo peso caso voc� engorde 15% ou emagre�a 20% de seu peso atual\n");
    printf("Informe seu peso atual\n");
    scanf("%f",&peso);
    fut1=(peso*0.15)+peso;
    printf("Caso voc� engorde 15%, seu peso ser� de: %f\n ",fut1);
    fut2=peso-(peso*0.20);
    printf("Caso voc� emagre�a 20%, seu peso ser� de: %f",fut2);
   
}
