#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//OBS: o parametro n da funcao bubbleSort e o tamanho do array, voce poder pegar o tamanho do array utilizando o seguinte codigo...

void random_num();
void bubbleSort(int array[], int n);
void imprime_num(int array[]);


void main(){
    random_num();
}

void random_num(){
    int i, array[50], n;
    for(i = 0; i < 50; i++){
        array[i] = rand() % 1000;
    }
    printf("Lista desordenada:\n");
    imprime_num(array);
    n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
}

void bubbleSort(int array[], int n){
    int temp;
    int trocou; // Variável para verificar se alguma troca ocorreu nesta passagem
    for (int i = 0; i < n - 1; i++) {
        trocou = 0;
        for (int j = 0; j < n - i - 1; j++) {
            // Compara o elemento atual com o próximo elemento
            if (array[j] > array[j + 1]) {
                // Realiza a troca se estiverem fora de ordem
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                trocou = 1; // Indica que ocorreu uma troca nesta passagem
            }
        }
        // Se nenhuma troca ocorreu nesta passagem, o array está ordenado
        if (trocou == 0) {
            break;
        }
    }
    printf("Lista ordenada:\n");
    imprime_num(array);
}

void imprime_num(int array[]){
    int i;
    for(i = 0; i < 50; i++){
        printf("%i\n", array[i]);
    }
    printf("\n");
}
  
