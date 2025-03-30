#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float a, b, c, delta, x1, x2;

    printf("Este é um programa que calcula as raízes de uma equação do segundo grau\n");
    printf("Digite o valor de a: ");
    scanf(" %f",&a,"\n");

    printf("Digite o valor de b: ");
    scanf(" %f",&b,"\n");

    printf("Digite o valor de c: ");
    scanf(" %f",&c,"\n");

    delta= (b*b) - (4 * a * c);

    if (delta<0){
     printf("esta equação não possui raízes reais");
    }
else{
    x1= (-b + (sqrt(delta)))/(2*a);
    x2= (-b - (sqrt(delta)))/(2*a);
    if (delta==0){
        printf("a raiz desta equação é %f", x1);
    }
        
    else{
        if (x1<x2){
            printf("as raízes da equação são %f e %f", x1, x2);
        }
        else{
            printf("as raízes da equação são %f e %f", x2, x1);
        }
    }
   }
}