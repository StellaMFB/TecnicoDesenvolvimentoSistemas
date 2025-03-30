#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void salva_texto(char texto[], char nome_arquivo[]);
int mostra_arquivo(char nome_arquivo[]);
void deleta_texto(char nome_arquivo[]);

int main(){
	int opcao;
	char texto[100], nome_arquivo[20] = "texto_arquivo.txt";
	
	printf("Digite 1 se deseja escrever um texto:\n");
	scanf("%i",&opcao);
	
	if (opcao == 1){
        printf("\nDigite um texto:\n");	
		scanf(" %[^\n]",texto);
        
	}
	else{
		printf("O programa foi finalizado.\n");
		return 0;
	}
	
	printf("\nDigite 1 se deseja salvar o texto digitado em um arquivo de texto:\n");
	scanf("%i",&opcao);
	
	if (opcao == 1){
		salva_texto(texto, nome_arquivo);
	}
	else{
		printf("O programa foi finalizado.\n");
		return 0;
	}
	
	printf("\nDigite 1 se deseja exibir o conteudo do arquivo na tela:\n");
	scanf("%i",&opcao);
	printf("\n");
	
	if (opcao == 1){
		mostra_arquivo(nome_arquivo);
	}
	else{
		printf("O programa foi finalizado.\n");
		return 0;
	}
	
	printf("\nDigite 1 se deseja apagar o conteudo do arquivo:\n");
	scanf("%i",&opcao);
	printf("\n");
	
	if (opcao == 1){
		deleta_texto(nome_arquivo);
	}
	else{
		printf("O programa foi finalizado.\n");
		return 0;
	}
}

void salva_texto(char texto[], char nome_arquivo[]){
	FILE *fptr;
	fptr = fopen(nome_arquivo, "w");
    fprintf(fptr, "%s", texto);
	fclose(fptr);
}

int mostra_arquivo(char nome_arquivo[]){
	FILE *fptr;
	char texto[100];
	fptr = fopen(nome_arquivo, "r");
	if (fptr == NULL){
		printf("Nao e possivel abrir o arquivo.\n");
		return 1;
	}
	while (fgets(texto, 100, fptr)){
		printf("%s\n", texto);
	}
	fclose(fptr);
}

void deleta_texto(char nome_arquivo[]){
	FILE *fptr;
	fptr = fopen(nome_arquivo, "w");
	fclose(fptr);
	printf("O conteudo do arquivo foi excluido com sucesso.\n");
}
