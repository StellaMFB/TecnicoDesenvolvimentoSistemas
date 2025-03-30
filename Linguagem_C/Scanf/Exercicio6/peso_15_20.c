#include <stdio.h>
#include <stdlib.h>
int main(){
	float peso, fut1, fut2;
	
	printf("Este é um programa que informa seu novo peso caso você engorde 15% ou emagreça 20% de seu peso atual\n");
    printf("Informe seu peso atual\n");
    scanf("%f",&peso);
    fut1=(peso*0.15)+peso;
    printf("Caso você engorde 15%, seu peso será de: %f\n ",fut1);
    fut2=peso-(peso*0.20);
    printf("Caso você emagreça 20%, seu peso será de: %f",fut2);
   
}
