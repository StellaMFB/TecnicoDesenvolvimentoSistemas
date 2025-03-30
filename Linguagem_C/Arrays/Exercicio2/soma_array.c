#include <stdio.h>

int main(){
    int soma = 0, i, lista[10];

    printf("Digite 10 elementos para a lista:\n");
    for (i = 0; i < 10; i++){
        scanf("%i",&lista[i]);
        soma += lista[i];
    }
    printf("A soma dos elementos da lista eh %i.", soma);
}
