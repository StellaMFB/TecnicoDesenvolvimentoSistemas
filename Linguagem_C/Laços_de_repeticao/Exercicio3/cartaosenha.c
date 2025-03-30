#include <stdio.h>

int main(){
	int senha, senha_digitada, tentativas = 0;
	
	printf("Digite uma senha numerica: ");
	scanf("%i",&senha);
	
	while(senha_digitada != senha && tentativas < 3){
		printf("\nDigite sua senha: ");
		scanf("%i",&senha_digitada);
		tentativas += 1;
		if (senha_digitada != senha && tentativas < 3){
			printf("Senha incorreta. Tente novamente!\n\n");
		}
		if (tentativas == 3){
			printf("Seu cartao foi bloqueado!");
		}
	}
}
