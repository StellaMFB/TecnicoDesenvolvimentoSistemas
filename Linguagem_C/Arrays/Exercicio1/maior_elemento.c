#include <stdio.h>

int main(){
    int lista[6], maior_elemento, i, n;
    printf("Insira 5 valores, pressionando Enter apos digitar cada valor.");
    for (i = 0; i < 5; i++){
        if (i == 0){
            printf("\nDigite o primeiro valor: ");
        }
        else{
            printf("\nDigite mais um valor: ");
        }
        scanf("%i",&n);
        lista[i] = n;
    }
    for (i = 0; i < 5; i++){
        if (i == 0){
            maior_elemento = lista[0];
        }
        else{
            if (lista[i] > maior_elemento){
                maior_elemento = lista[i];
            }
        }
    }
    printf("O maior elemento eh %i.", maior_elemento);
}
