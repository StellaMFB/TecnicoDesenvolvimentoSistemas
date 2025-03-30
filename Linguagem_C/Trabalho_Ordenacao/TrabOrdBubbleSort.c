#include<stdio.h>
#include <stdlib.h>
#include <time.h>
 
void menu();
int ordenar(char [], long int);
int ordenarN();
int mostrarResul(int tamanho);
void bubbleSort(long int arr[], long int n);
void MostrarNumOrdenados(clock_t tempoOrd, long int array[], long int n);
void SalvarNumOrdenados(long int, long int []);
int retornar();
 
void main(){
    menu();
}
 
void menu(){
    int opcaoUsuario;
    printf("Programa que ordena diferentes quantias de numeros. \n\n");
    printf("Pressione a tecla 1 se deseja ordenar 10.000 numeros. \n\n");
    printf("Pressione a tecla 2 se deseja ordenar 20.000 numeros. \n\n");
    printf("Pressione a tecla 3 se deseja ordenar 30.000 numeros. \n\n");
    printf("Pressione a tecla 4 se deseja ordenar 40.000 numeros. \n\n");
    printf("Pressione a tecla 5 se deseja ordenar 50.000 numeros. \n\n");
    printf("Pressione a tecla 6 se deseja ordenar 1.000.000 numeros. \n\n");
    printf("Pressione a tecla 7 se deseja ordenar outra quantia de numeros. \n\n");
    scanf("%i", &opcaoUsuario);
    switch (opcaoUsuario){
        case 1:
            ordenar("numeros_10mil.txt", 10000);
            break;
        case 2:
            ordenar("numeros_20mil.txt", 20000);
            break;
        case 3:
            ordenar("numeros_30mil.txt", 30000);
            break;
        case 4:
            ordenar("numeros_40mil.txt", 40000);
            break;
        case 5:
            ordenar("numeros_50mil.txt", 50000);
            break;
        case 6:
            ordenar("numeros_1mi.txt", 1000000);
            break;
        case 7:
            ordenarN();
            break;
        default:
            printf("Opcao Invalida. Escolha uma opcao valida \n\n");
            system("pause");
            system("cls");
            menu();                                 
    }   
}
 
int ordenar(char nome_arquivo[20], long int qtd){
    FILE *fptr;
    fptr = fopen (nome_arquivo, "r");
    if (fptr == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }
    char leitura[20];
    long int numeros[qtd];
    int a = 0;
    printf("Numeros desordenados: \n");
    system("pause");
    while (fgets (leitura, 20, fptr)){
        numeros[a] = atoi(leitura);
        printf("%li \n", numeros[a]);
        a++;
    }
    fclose;
    long int n = sizeof(numeros) / sizeof(numeros[0]);
    bubbleSort(numeros, n);  
}
 
int ordenarN(){ 
    long int quantidade, i;
    printf("Quantos numeros voce deseja gerar e armazenar em um arquivo? ");
    scanf("%li", &quantidade);
 
    FILE *arquivo = fopen("numeros_aleatorios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }
    srand(time(NULL));
 
    for (i = 0; i < quantidade; i++) {
        long int numero_aleatorio = rand() %quantidade;
        fprintf(arquivo, "%li\n", numero_aleatorio);
    }
 
    fclose(arquivo);
    printf("%li numeros aleatorios foram gerados e armazenados no arquivo 'numeros_aleatorios.txt'.\n", quantidade);
    mostrarResul(quantidade);
}
 
int mostrarResul(int tamanho){
    FILE *arquivo;
    arquivo = fopen("numeros_aleatorios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }
    char leitura[20];
    long int numeros[tamanho];
    int a = 0;
 
    printf("Numeros desordenados: \n");
    system("pause");
 
    while (fgets(leitura, 20, arquivo)){
        numeros[a] = atoi(leitura);
        printf("%li \n", numeros[a]);
        a++;
    }
    a = 0;
    system("pause");
    system("cls");
    int n = sizeof(numeros) / sizeof(numeros[0]);
    bubbleSort(numeros, n);     
}
void bubbleSort(long int arr[], long int n) {
    clock_t tempoOrd;
    long int i, j;
    tempoOrd = clock();
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                long int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    tempoOrd = clock() - tempoOrd;
    system("pause");
    system("cls");
    printf("Numeros ordenados: \n");
    system("pause");
    MostrarNumOrdenados(tempoOrd, arr, n);
}
 
void MostrarNumOrdenados(clock_t tempoOrd, long int array[], long int n){
    clock_t tempoImpOrd;
    int opcao;
    long int a;
    tempoImpOrd = clock();
    for(a = 0; a < n; a++){
        printf("%li \n", array[a]);
    }
    tempoImpOrd = clock() - tempoImpOrd;
    if (n >= 1000000){
        printf("O tempo de ordenacao de %li de numeros foi de %f segundos e o tempo levado para imprimir os numeros ordenados na tela foi de %f segundos.\n", n, ((float)tempoOrd)/CLOCKS_PER_SEC, ((float)tempoImpOrd)/CLOCKS_PER_SEC);
    }
    else{
        printf("O tempo de ordenacao de %li numeros foi de %f segundos e o tempo levado para imprimir os numeros ordenados na tela foi de %f segundos.\n", n, ((float)tempoOrd)/CLOCKS_PER_SEC, ((float)tempoImpOrd)/CLOCKS_PER_SEC);
    }
    printf("Se deseja salvar os numeros em um arquivo de texto, pressione 1. Caso não deseja salvar, pressione qualquer outro numero. \n");
    scanf("%i", &opcao);
    if (opcao == 1){
        SalvarNumOrdenados(n, array);
    }
    retornar();
}
 
void SalvarNumOrdenados(long int n, long int array[n]){
    char nome_arquivo[20];
    long int i;
    FILE *fptr;
    printf("Digite um nome para o arquivo + a extensao. Exemplo(NumerosOrdenados.txt):\n");
    scanf("%s", nome_arquivo);
    fptr = fopen(nome_arquivo, "w");
    for (i = 0; i < n; i++){
        fprintf(fptr, "%li\n", array[i]);
    }
    fclose(fptr);
}
 
int retornar(){
    system("pause");
    system("cls");
    int opcaoUsuario;
    printf("Se deseja voltar ao menu, pressione 1. Caso deseje encerrar o programa, pressione qualquer outro numero. \n");
    scanf("%i", &opcaoUsuario);
    if (opcaoUsuario == 1){
        menu();
    }else{
        printf("O programa ira encerrar. \n");
        system("pause");
        return 0;
    }
}