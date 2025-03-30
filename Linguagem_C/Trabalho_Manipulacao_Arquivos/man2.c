#include <stdio.h>
#include <stdlib.h>
 
void Menu (); 
void LerArquivo(); 
void CalcMedia(); 
void Maior(); 
void NumOrdenados(); 
void Menor(int valores[]); 
void MostrarResultado(int array[], int n); 
int comparacao(const void *x_void, const void *y_void);
void CriaArquivo(int array[]);
 
int main(){	
	Menu();	
}
 
void Menu (){
	int opcaoUsuario; 
	printf("Escolha uma das opcoes de acordo com o que deseja: \n \n");
	printf("1 - Ler o conteudo de um arquivo de numeros inteiros. \n \n");
	printf("2 - Calcular a media dos numeros do arquivo. \n \n");
	printf("3 - Identificar o maior e menor numero do arquivo. \n \n");
	printf("4 - Criar um novo arquivo com os numeros em ordem crescente. \n \n");
	scanf("%i", &opcaoUsuario);	
	switch (opcaoUsuario){
		case 1: 
			LerArquivo();
			break; 
		case 2:
			CalcMedia();
			break; 
		case 3: 
			Maior(); 
			break;
		case 4: 
		    NumOrdenados();	
			break; 	
	}
	if (opcaoUsuario >= 5){
		printf("Escolha um numero valido. \n");
		Menu();
	}else if (opcaoUsuario <= 0){
		printf("Escolha um numero valido. \n");
		Menu();
	}	
}
 
void LerArquivo(){
	FILE *fptr; 	
	fptr = fopen ("valores.txt", "r");
    if (fptr == NULL){
		printf("Nao e possivel abrir o arquivo.\n");
		main();
	}
	char leitura[26]; 
	while (fgets(leitura, 26, fptr)){
		printf("%s \n", leitura);
	}	
	fclose (fptr);	
	system("pause");
	system ("cls");
	Menu();	
}
 
void CalcMedia(){
	FILE *fptr; 
	fptr = fopen ("valores.txt", "r"); 
	char leitura[26];
	int numeros[25];
	int a = 0;   
	while (fgets (leitura, 26, fptr)){
		numeros[a] = atoi(leitura); 
		printf("valores : %i \n", numeros[a]);
		a++;
	}
	a = 0;
	fclose (fptr);
	float media; 
	int h, soma = 0;
	for(h = 0; h <=24; h++){
		soma += numeros[h]; 
	}
	media = (soma / 25);
	printf("media dos numeros: %.2f \n \n", media);
	system("pause \n \n");	 
	system ("cls");
	Menu();	
}
 
void Maior(){
	FILE *fptr; 
	fptr = fopen ("valores.txt", "r"); 
	char leitura[26];
	int numeros[25];
	int a = 0;    
	while (fgets (leitura, 26, fptr)){
		numeros[a] = atoi(leitura); 
		printf("valores : %i \n", numeros[a]);
		a++;
	}
	a = 0;
	fclose (fptr);
	int maior = numeros[0]; 
	int b; 
	for (b = 0; b <= 24; b++){
		int Atual = numeros[b]; 
		if (Atual > maior){
			maior = Atual; 
		}
	}

	printf("O maior numero eh: %i \n", maior);	
	Menor(numeros);
}
 
void Menor(int valores[]){	
	int menor = valores[0];  
	int a; 
	for(a = 0; a <= 24; a++){
		int numAtual = valores[a]; 
		if (numAtual < menor){
			menor = numAtual; 
		}
	}
	printf("O menor numero eh: %i \n \n", menor);
	system("pause \n");	 
	system ("cls");
	Menu();		
}
 
void NumOrdenados(){
	int a = 0; 
	FILE *fptr;
	fptr = fopen ("valores.txt", "r");
	char leitura[26]; 
	int array[25] = {0};
	while (fgets(leitura, 26, fptr)){
		array[a] = atoi(leitura);
		printf("valores : %i \n", array[a]);
		a++;
	}
	a = 0;
	fclose (fptr);
	int n = sizeof(array) / sizeof(array[0]);																								
	qsort(array, 25, sizeof(int), comparacao);
    printf("\n");
    printf("Numeros ordenados: \n");
    MostrarResultado(array, n);
}
 
int comparacao(const void *x_void, const void *y_void){
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return x - y;
}

void MostrarResultado(int array[], int n){
	for(int a = 0; a < n; a++){
		printf("%i ", array[a]);
	}
    printf("\n");
	system("pause \n");	 
	system ("cls");
    CriaArquivo(array);		
}

void CriaArquivo(int array[]){
    FILE *fptr;
    int i;
	fptr = fopen("num_ord.txt", "w");
    for (i = 0; i < 25; i++){
        fprintf(fptr, "%i\n", array[i]);
    }
	fclose(fptr);
    printf("O arquivo foi salvo com sucesso.\n");
}