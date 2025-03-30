#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menuInicial();
void historiaDoJogo();
void ExplicacaoFases();  
void explicacaoJogo1(); 
void jogoDaBalanca(); 
void ganhadorBalanca(int, int);
void continuacaoDaHistoria(); 
void FaseDasPerguntas();
void perguntas();
void pergunta2();
void pergunta3();
void pergunta4();
void pergunta5();
void pergunta6();
void pergunta7(); 
void continuacaoDaHistoria3(); 
void jogoDo21();
int campeonato();
char partida();
int jogada(int arg);
char dsj_fzr_jog(int soma);
void prt_msg_part(int car_ale, int soma, int arg, int pais);
void random_cartas(int carta_aleatoria);
char cnt_pnt_part(int pontos_arg, int pontos_usu);
void fim_camp(int camp_bra, int camp_arg);	
void finalDoJogo1();
void finalDoJogo2();

int main() {
	menuInicial(); 
}

void menuInicial() {
	int opcaoUsuario, ret = -1; 
	printf("Seja bem-vindo ao jogo Em Busca do Hexa! \n");
	printf("Voce, caro jogador, esta recebendo o honravel convite de participar desta jornada em busca do Hexa do Brasil, entao, caso deseje o fazer, digite 1 para iniciar o jogo. \n ");
	printf("Caso nao deseje ajudar seu proprio pais, digite 2. \n");
	do{
        ret = scanf("%i", &opcaoUsuario);
        getchar();
        if (ret == 0){
            printf("Digite um número inteiro pelo menos, imbecil.\n \n \n");
            printf("Digite 1 para iniciar o jogo.\n");
            printf("Caso nao deseje ajudar seu proprio pais, digite 2. \n"); 
        }
    }while (ret == 0);
	
	
	if (opcaoUsuario == 1){
		historiaDoJogo(); 
	}else if (opcaoUsuario == 2){
		printf("Entao, nossa conversa se encerra aqui. Adeus! \n");	
	}else{
		system("cls");
		printf("Essa opcao nao existe. Releia as condicoes do jogo. \n");
		menuInicial();		
	}
}

void historiaDoJogo(){
	int opcaoUsuario, ret = -1; 
	system("cls");	
	printf("Richarlison se sentira extremamente desapontado apos a derrota contra a Croacia e, ao ver a vitoria da Argentina, sua indignacao apenas aumentou.\n \n");
	printf("Desapontado e descrente, Richarlison foi em busca de seu amigo Neymar, determinado a conseguir o Hexa para o Brasil indepedente do que viesse pela frente. \n \n");
	printf("Para conseguir o Hexa, eles terao que enfrentar diversos desafios contra os seus maiores inimigos, comecando pelo terror de todos os brasileiros desde a Copa de 2014: Alemanha. \n \n");
	printf("A dificuldade do jogo eh 7 de ouros. Digite 1 se deseja prosseguir em sua jornada. \n \n"); 
    do{
        ret = scanf("%i", &opcaoUsuario);
        getchar();
        if (ret == 0){
            printf("Digite um numero inteiro pelo menos, imbecil.\n");
            printf("Digite 1 se deseja prosseguir sua jornada.\n\n\n"); 
        }
    }while (ret == 0);
	
	
	if (opcaoUsuario == 1){
		system("cls");
		explicacaoJogo1(); 
	}else{
		system("cls");
		printf("Infelizmente, agora nao ha mais como retornar. \n \n");
		explicacaoJogo1(); 
	}
}; 

void explicacaoJogo1(){
	printf("Os dois jogadores foram em busca da Alemanha, sabendo extamente onde encontra-la. Entretanto, ingenuos igual no jogo contra a Croacia em 2022, Neymar e Richarlison cairam em uma armadilha. \n \n");
	printf("Presos separadamente, Alemanha chega, rindo de maneira diabolica e dizendo: \n \n");
	printf("- Acharam mesmo que seria facil assim?! Seus tolos! Eu jamais os deixaria avancar juntos. Apenas um de voces continuara e, para decidir quem ira prosseguir, deverao jogar o meu jogo favorito... O jogo da balanca! \n \n");
	printf("- O jogo da balanca sera da seguinte maneira... - prosseguiu Alemanha - cada um de voces devera escolher um numero inteiro de 0 a 100. Sera feita a media artimetica de ambos e o resultado sera multiplicado por 0.8. O que tiver escolhido o numero mais proximo ao resultado, vence a rodada... \n \n");
	printf("- Sera melhor de 3. Aquele que, ao final das 3 rodadas tiver a menor quantia de pontos positivos perdera, ficando aqui incapacitado de prosseguir... Inclusive, voces sabem o motivo da dificuldade ser 7 de ouros, estou certa? - explicou Alemanha, com um sorriso convencido no rosto. \n \n");
	printf("Agora, os dois brasileiros se veem obrigados a jogar um contra o outro. Quem saira vitorioso? \n \n");	
	jogoDaBalanca(); 
}

void jogoDaBalanca(){
	int numero1, numero2, i, ret = -1;  
	float media, objetivo, dif1, dif2;
	int rodadasVencidas2 = 0, rodadasVencidas1 = 0; 
	
	for (i = 0; i <= 2; i++){		
		printf("Por favor, jogador 1. Insira sua escolha. \n \n");
        do{
            ret = scanf("%i", &numero1);
            getchar();
            if (ret == 0){
                printf("Eu disse numero inteiro, imbecil.\n");
                printf("Digite um numero de acordo com as regras dessa vez.\n"); 
        }
    }while (ret == 0);
		printf("\nPor favor, jogador 2. Insira sua escolha. \n \n");
         do{
            ret = scanf("%i", &numero2);
            getchar();
            if (ret == 0){
                printf("Eu disse numero inteiro, imbecil.\n");
                printf("Digite um numero de acordo com as regras dessa vez.\n"); 
        }
    }while (ret == 0);
		
		
		if(numero1 < 0){
			printf("O jogador nao pode inserir numeros menores que 0. \n \n");	
			jogoDaBalanca();	
		}else if (numero1 < 0){
			printf("O jogador nao pode inserir numeros menores que 0. \n \n");
			jogoDaBalanca();
		}else if (numero1 > 100){
			printf("O jogador nao pode inserir numeros maiores que 100. \n \n");
			jogoDaBalanca();	
		}else if (numero2 > 100){
			printf("O jogador nao pode inserir numeros maiores que 100. \n \n");
			jogoDaBalanca; 	
		} 		
		media = (numero1 + numero2) / 2; 
		objetivo = (media * 0.8); 
		dif1 = (numero1 - objetivo);
		dif2 = (numero2 - objetivo);	
		printf("O resultado eh: %.1f ", objetivo);		
		if (dif1 < dif2){
			printf("O jogador 1 venceu a rodada! Meus parabens. \n \n");
			rodadasVencidas1 = (rodadasVencidas1 + 1);
		}else if (dif1 == dif2){
			printf("Esta rodada empatou! Nenhum dos jogadores pontua. \n \n");
		}else{
			printf("O jogador 2 venceu a rodada! Meus parabens. \n \n");
			rodadasVencidas2 = (rodadasVencidas2 + 1);
		}				
	}
	
	ganhadorBalanca(rodadasVencidas1, rodadasVencidas2);
	continuacaoDaHistoria();	
}


void ganhadorBalanca(int result1, int result2){
	if (result1 > result2){
		printf("E o vencedor eh: jogador 1! \n \n");
	}else if (result1 == result2){
		printf("O jogo continura ate que haja um vencedor. \n \n");
		jogoDaBalanca(); 
	}else{
		printf("E o vencedor eh: jogador2! \n \n");
	}	 
}

void continuacaoDaHistoria(){
	int opcaoUsuario, ret = -1; 
	printf("Apos o jogo, Richarlison fora libertado. Olhando seu amigo Neymar ainda preso e sentindo a raiva dominar suas veias, tentou deitar a Alemanha na porrada, entretanto, perdeu feio igual em 2014. Prosseguiu pois Alemanha teve do, todo capenga e manco. \n \n");
	printf("Agora, Richarlison, sozinho e capenga, tera de enfrentar sozinho mais dois inimigos: a Croacia e o juiz. \n \n");
	printf("A dificuldade da proxima fase sera 2 de ouros. Digite 1 para prosseguir em sua jornada em busca do Hexa. \n \n");
    do{
        ret = scanf("%i", &opcaoUsuario);
        getchar();
        if (ret == 0){
            printf("Digite um numero inteiro pelo menos, imbecil.\n");
            printf("Digite 1 se deseja prosseguir sua jornada.\n\n\n"); 
        }
    }while (ret == 0);
	
	
	if (opcaoUsuario == 1){
		system("cls");
		FaseDasPerguntas(); 
	}else{
		system("cls");
		printf("Infelizmente, agora nao ha mais como retornar. \n \n");
		FaseDasPerguntas(); 
	}	
}

void FaseDasPerguntas(){
	int opcaousuario, ret = -1;
	printf("Ao encontrar-se com a Croacia e o juiz, Richarlison ja fora recebido com um bombardeio de informacoes, e voce, jogador, tera de ajuda-lo a conquistar o Hexa ja que ele perdera seu melhor amigo. \n \n");
	printf("Se chegou ate aqui isso significa que voce esta uma fase mais proxima de ganhar o HEXA para o seu pais, mas fique sabendo que isso nao sera nada facil.\n\n\n");
	printf("Nessa fase seus conhecimentos sobre a copa do mundo serao colocados a prova.\n\n");
	printf("Caso acerte todas as perguntas, meus parabens, voce passara de nivel. Entretanto, caso erre alguma pergunta no meio do caminho, parabens voce e burro e tera que comecar novamente. \n\n");	
	printf("Todas elas serao perguntas de multipla escolha, por isso pense bem antes de responder.\n\n\n");
    printf("Deseja iniciar o jogo?\n");
    printf("Selecione a opcao que melhor se encaixe\n");
    printf("1- Iniciar o jogo\n2- Desistir antes mesmo de comecar e decepcionar toda a sua familia e pais.(º_º;)\n");
    do{
        ret = scanf("%i", &opcaousuario);
        getchar();
        if (ret == 0){
            printf("Digite um numero inteiro pelo menos, imbecil.\n");
            printf("Digite 1 para iniciar o jogo.\n\n\n"); 
            printf("Digite 2 caso deseje desistir antes mesmo de começar e decepcionar toda a sua familia e pais.\n");
        }
    }while (ret == 0);
    system("cls");
    
    if (opcaousuario == 1){
    	printf("Preparando perguntas...\n\n");
        system("pause");
        perguntas();
	}else if (opcaousuario == 2){
		printf("Voce achou mesmo que essa opcao existia? (><,)\n");
		perguntas();
	}else{
		printf("Voce ira jogar a favor do seu pais sim. \n");
		perguntas();
	}
}

void perguntas(){

	int resp_usuario, ret = -1;
	
    printf("Em qual ano a selecao brasileira ganhou a sua primeira copa do mundo?\n");
    printf("1 : 1930    3 : 1962\n2 : 1958    4 : 1970 \n");
    do{
        ret = scanf("%i", &resp_usuario);
        getchar();
        if (ret == 0){
            printf("Eu disse numero inteiro imbecil.\n");
            perguntas();
        }
    }while (ret == 0);
    
    
	if (resp_usuario == 2) {
        printf("Parabens voce acertou a primeira pergunta. \n \n");
        pergunta2();
    }else if (resp_usuario <= 0 || resp_usuario > 4){
        printf("Nao existe essa opcao, imbecil.\n\n");
        perguntas();
    }else {
        printf("Errouuuuuuuuu \n \n");
        perguntas();
    }
}

void pergunta2(){
        
    int resp_usuario, ret = -1;

	printf("Miroslak Klose eh o maior artilheiro da historia das copas, com quantos gols?\n");
	printf("1:22    3:12\n2:37    4:16\n");
    do{
        ret = scanf("%i", &resp_usuario);
        getchar();
        if (ret == 0){
            printf("Eu disse numero inteiro imbecil.\n");
            pergunta2();
        }
    }while (ret == 0);
		
	if (resp_usuario == 4){
		printf("Resposta correta. \n \n");
		pergunta3();
	}else if (resp_usuario <= 0 || resp_usuario > 4){
        printf("Nao existe essa opcao, imbecil.\n\n");
        pergunta2();
    }else {
		printf("Resposta Incorreta. Tente novamente.\n \n");
		perguntas();
	}
}
	
void pergunta3(){

    int resp_usuario, ret = -1;

	printf("Em que ano a primeira copa do mundo foi realizada?\n");
	printf("1 : 1958    3 : 1930\n2 : 1926    4 : 1950 \n");
    do{
        ret = scanf("%i", &resp_usuario);
        getchar();
        if (ret == 0){
            printf("Digite um numero inteiro, imbecil.\n");
            pergunta3();
        }
    }while (ret == 0);
		
	if (resp_usuario == 3) {
		printf("Resposta correta. \n \n");
		pergunta4();
	}else if (resp_usuario <= 0 || resp_usuario > 4){
        printf("Nao existe essa opcao, imbecil.\n\n");
        pergunta3();
    }else {
		printf("Resposta Incorreta. Tente novamente. \n \n");
		perguntas();
	}
}
		
void pergunta4 (){

    int resp_usuario, ret = -1;

	printf("Pele eh o maior campeao das copas do mundo, quantas copas ele conquistou?\n");
	printf("1:3    3:2\n2:4    4:1\n");
    do{
        ret = scanf("%i", &resp_usuario);
        getchar();
        if (ret == 0){
            printf("Digite um numero inteiro, imbecil.\n");
            pergunta4();
        }
    }while (ret == 0);
		
	if (resp_usuario == 1){
		printf("Resposta correta. \n \n");
		pergunta5();
	}else if (resp_usuario <= 0 || resp_usuario > 4){
        printf("Nao existe essa opcao, imbecil.\n\n");
        pergunta4();
    }else {
		printf("Resposta Incorreta. Tente novamente. \n");
		perguntas();
	}
}
	
void pergunta5(){

    int resp_usuario, ret = -1;

	printf("Quantos paises sao tetra campeoes?\n");
	printf("1:5    3:3\n2:2    4:1\n");
    do{
        ret = scanf("%i", &resp_usuario);
        getchar();
        if (ret == 0){
            printf("Digite um numero inteiro, imbecil.\n");
            pergunta5();
        }
    }while (ret == 0);
		
	if (resp_usuario == 2) {
		printf("Resposta correta. \n \n");
		pergunta6();
	}else if (resp_usuario <= 0 || resp_usuario > 4){
        printf("Nao existe essa opcao, imbecil.\n\n");
        pergunta5();
    }else {
		printf("Resposta Incorreta. Tente novamente \n");
		perguntas();
	}
}
		
void pergunta6(){

    int resp_usuario, ret = -1;

	printf("Com quantos anos Pele disputou sua primeira copa?\n");
	printf("1:17    3:12\n2:20    4:18\n");
    do{
        ret = scanf("%i", &resp_usuario);
        getchar();
        if (ret == 0){
            printf("Digite um numero inteiro, imbecil.\n");
            pergunta6();
        }
    }while (ret == 0);
		
	if (resp_usuario == 1) {
		printf("Resposta correta. \n \n");
		pergunta7();
	}else if (resp_usuario <= 0 || resp_usuario > 4){
        printf("Nao existe essa opcao, imbecil.\n\n");
        pergunta6();
    }else {
		printf("Resposta Incorreta. Tente novamente. \n");
		perguntas();
	}
}
		
void pergunta7(){

    int resp_usuario, ret = -1;

	printf("Na copa de 2014 no Brasil, a selecao terminou em qual posicao?\n");
	printf("1:segundo    3:quarto\n2:primeiro    4:quinto\n");
    do{
        ret = scanf("%i", &resp_usuario);
        getchar();
        if (ret == 0){
            printf("Digite um numero inteiro, imbecil.\n");
            pergunta7();
        }
    }while (ret == 0);
		
	if (resp_usuario == 3){
		printf("Parabens voce passou de fase!!!");
		system("pause");
		continuacaoDaHistoria3(); 
	}else if (resp_usuario <= 0 || resp_usuario > 4){
        printf("Nao existe essa opcao, imbecil.\n\n");
        pergunta7();
    }else {
		printf("Resposta Incorreta. Tente novamente. \n");
		perguntas();
	}
	system("pause");
}

void continuacaoDaHistoria3(){
	system("cls");
	system("pause");
	printf("Apos vencer a batalha contra o juiz e a Croacia que desta vez nao tivera injustica, Richarlison seguiu em busca de seu maior inimigo: Argentina. \n \n");
	printf("Ao chegar no estadio da Argentina, Richarlison encontra o boss final na sua busca do Hexa: o Messi, este que desde o comeco sabia do plano do brasileiro e estava apenas o esperando. \n \n");
	printf("Messi se encontrava sentado em uma cadeira que acompanhava uma mesa bem no centro do estadio. Enquanto o argentino vestia um belo terno, o brasileiro estava todo faceiro com sua bermuda, chinelo e camisa da selecao. \n \n");
	printf("Com toda a ousadia do universo, Richarlison se aproximou do argentino, tirou um baralho do bolso, jogou as cartas na mesa e disse: \n");
	printf("- Vamos decidir quem merece o Hexa da maneira mais justa possivel: 21! \n \n");
	system("pause");
	system("cls");
	
	jogoDo21();		
}

void jogoDo21(){
	int b, ret = -1;
    printf("Este campeonato ira determinar o futuro do pais, se voce ganhar, o Brasil leva o tao esperado Hexa para casa!\n");
    printf("Caso contrario, voce sera amaldicoado pelo seu povo, para todo o sempre!\n");
    printf("Quem ganhar a maior quantidade de 3 partidas ganha.\n");
    printf("Por isso, pense bem em suas jogadas. Boa sorte! Ou nao...\n");
    printf("\n\n");
    system("cls");
    printf(" ______     __              _           ______    __   __          __        _           ______    __   __ \n");
    printf("|   _   |  |  |           /   |       /  _____|  |  |/  /         |  |     /   |       /  _____|  |  |/  / \n");
    printf("|  |_)   | |  |          /     |     |  |        |  .  /          |  |    /     |     |  |        |  .  /  \n");
    printf("|   _  <   |  |         /  /_|  |    |  |        |   <      __    |  |   /  /_|  |    |  |        |   <    \n");
    printf("|  |_)   | |  |____    /  _____  |   |  |_____   |  .  |   |  |___|  |  /  _____  |   |  |_____   |  .  |  \n");
    printf("|_______/  |_______|  /__/     |__|   |_______|  |__||__|   |_______/  /__/     |__|   |_______|  |__||__| \n");
    printf("\n\n\n");
    printf("Voce tem que fazer o mais proximo de 21 pontos para ganhar\n");
    printf("Porem nao pode passar desse limite\n");
    printf("E possivel parar apos cada jogada\n");
    printf("\n\n");
    do{
        printf("Deseja limpar a tela? Em caso afirmativo, digite 1. Em caso negativo, digite qualquer outro NUMERO INTEIRO:\n ");
        ret = scanf(" %i",&b);
        getchar();
        if (ret == 0){
            printf("Eu disse numero inteiro imbecil.\n");
        }
    }while (ret == 0);
    if (b == 1){
        system("cls");
        printf(" ______     __              _           ______    __   __          __        _           ______    __   __ \n");
        printf("|   _   |  |  |           /   |       /  _____|  |  |/  /         |  |     /   |       /  _____|  |  |/  / \n");
        printf("|  |_)   | |  |          /     |     |  |        |  .  /          |  |    /     |     |  |        |  .  /  \n");
        printf("|   _  <   |  |         /  /_|  |    |  |        |   <      __    |  |   /  /_|  |    |  |        |   <    \n");
        printf("|  |_)   | |  |____    /  _____  |   |  |_____   |  .  |   |  |___|  |  /  _____  |   |  |_____   |  .  |  \n");
        printf("|_______/  |_______|  /__/     |__|   |_______|  |__||__|   |_______/  /__/     |__|   |_______|  |__||__| \n");
    }
    printf("\n\n\n");
    campeonato();
}	

int campeonato(){
    int camp_arg = 0, camp_bra = 0, cont, v, b, ret = -1;
    for(cont = 0; cont < 3; cont += 1){
        v = partida();
        if (v == 1){
            camp_arg += 1;
            printf("Agora a pontuacao esta de %i a %i para a Argentina.\n",camp_arg, camp_bra);
        }else if(v == 3){
        	printf("Empate");
		}else{
            camp_bra += 1;
            printf("Agora a pontuacao esta de %i a %i para o Brasil.\n", camp_bra, camp_arg);
        }
        do{
        printf("Deseja limpar a tela? Em caso afirmativo, digite 1. Em caso negativo, digite qualquer outro NUMERO INTEIRO: \n");
        ret = scanf(" %i",&b);
        getchar();
        if (ret == 0){
            printf("Eu disse numero inteiro imbecil.\n");
        }
    }while (ret == 0);
        if (b == 1){
            system("cls");
            printf(" ______     __              _           ______    __   __          __        _           ______    __   __ \n");
            printf("|   _   |  |  |           /   |       /  _____|  |  |/  /         |  |     /   |       /  _____|  |  |/  / \n");
            printf("|  |_)   | |  |          /     |     |  |        |  .  /          |  |    /     |     |  |        |  .  /  \n");
            printf("|   _  <   |  |         /  /_|  |    |  |        |   <      __    |  |   /  /_|  |    |  |        |   <    \n");
            printf("|  |_)   | |  |____    /  _____  |   |  |_____   |  .  |   |  |___|  |  /  _____  |   |  |_____   |  .  |  \n");
            printf("|_______/  |_______|  /__/     |__|   |_______|  |__||__|   |_______/  /__/     |__|   |_______|  |__||__| \n");
        }
        printf("\n\n\n");
    }
    fim_camp(camp_bra, camp_arg);
}

char partida(){
    int pontos_usu = 0, pontos_arg, v_part, arg, b, ret = -1;
    printf("A argentina comeca!\n");
    arg = 1;
    pontos_arg = jogada(arg);
    do{
        printf("Deseja limpar a tela? Em caso afirmativo, digite 1. Em caso negativo, digite qualquer outro NUMERO INTEIRO: \n");
        ret = scanf(" %i",&b);
        getchar();
        if (ret == 0){
            printf("Eu disse numero inteiro imbecil.\n");
        }
    }while (ret == 0);
    if (b == 1){
        system("cls");
        printf(" ______     __              _           ______    __   __          __        _           ______    __   __ \n");
        printf("|   _   |  |  |           /   |       /  _____|  |  |/  /         |  |     /   |       /  _____|  |  |/  / \n");
        printf("|  |_)   | |  |          /     |     |  |        |  .  /          |  |    /     |     |  |        |  .  /  \n");
        printf("|   _  <   |  |         /  /_|  |    |  |        |   <      __    |  |   /  /_|  |    |  |        |   <    \n");
        printf("|  |_)   | |  |____    /  _____  |   |  |_____   |  .  |   |  |___|  |  /  _____  |   |  |_____   |  .  |  \n");
        printf("|_______/  |_______|  /__/     |__|   |_______|  |__||__|   |_______/  /__/     |__|   |_______|  |__||__| \n");
    }
    printf("\n\n\n");
    if (pontos_arg <= 21){
        printf("Sua vez!\n");
        arg = 2;
        pontos_usu = jogada(arg);
    }
    v_part = cnt_pnt_part(pontos_arg, pontos_usu);
    return v_part;
    do{
        printf("Deseja limpar a tela? Em caso afirmativo, digite 1. Em caso negativo, digite qualquer outro NUMERO INTEIRO: \n");
        ret = scanf(" %i",&b);
        getchar();
        if (ret == 0){
            printf("Eu disse numero inteiro imbecil.\n");
        }
    }while (ret == 0);
    if (b == 1){
        system("cls");
        printf(" ______     __              _           ______    __   __          __        _           ______    __   __ \n");
        printf("|   _   |  |  |           /   |       /  _____|  |  |/  /         |  |     /   |       /  _____|  |  |/  / \n");
        printf("|  |_)   | |  |          /     |     |  |        |  .  /          |  |    /     |     |  |        |  .  /  \n");
        printf("|   _  <   |  |         /  /_|  |    |  |        |   <      __    |  |   /  /_|  |    |  |        |   <    \n");
        printf("|  |_)   | |  |____    /  _____  |   |  |_____   |  .  |   |  |___|  |  /  _____  |   |  |_____   |  .  |  \n");
        printf("|_______/  |_______|  /__/     |__|   |_______|  |__||__|   |_______/  /__/     |__|   |_______|  |__||__| \n");
    }
    printf("\n\n\n");
}

int jogada(int arg){
    int soma = 0, i, car_ale, a, pais;
    if (arg == 1){
        printf("Agora e a minha vez de jogar!\n");
        pais = 1;
    }
    else{
        pais = 2;
    }
    for(i = 0; i < 3; i++){
        if (arg != 1){
            a = dsj_fzr_jog(soma);
            if (a == 1) {
                break;
            }
        }
        car_ale = rand() % 10;
        if (car_ale == 0){
            soma += 10;
        } 
        else{
            soma += car_ale;
        }
        
        random_cartas(car_ale);
        prt_msg_part(car_ale, soma, arg, pais);
        if (soma > 21){
            break;
        }
    }
    return soma;
}

char dsj_fzr_jog(int soma){
    int i = 0, cnfrm , c, ret = -1, ret2 = -1;
    while (i < 3){
        do{
        printf("Deseja fazer a jogada? Em caso afirmativo, digite 1. Em caso negativo, digite qualquer outro NUMERO INTEIRO: \n");
        ret = scanf(" %i",&cnfrm);
        getchar();
        if (ret == 0){
            printf("Eu disse numero inteiro imbecil.\n");
        }
    }while (ret == 0);
        if (cnfrm == 1){
            return 2;
        }
        else{
            do{
        printf("Deseja encerrar sua jogada ou continuar jogando? Caso deseje encerrar, digite 1. Caso deseje continuar, digite qualquer outro NUMERO INTEIRO:\n ");
        ret2 = scanf(" %i",&c);
        getchar();
        if (ret == 0){
            printf("Eu disse numero inteiro imbecil.\n");
        }
    }while (ret == 0);
            if(soma == 0 && c == 1){
                printf("Nao e possivel encerrar a jogada sem obter pontos.\n");
                continue;
            }
            else if (c == 1){
                return 1;
            }
            else{
                continue;
            }
            i += 1;
        }
    }
}

void prt_msg_part(int car_ale, int soma, int arg, int pais) {
    if (car_ale == 1){
        if (arg == 1){
            printf("Messi tirou As, que vale 1 ponto.\n");
        }
        else{
            printf("Voce tirou As, que vale 1 ponto.\n");
        }
        
    }
    else if(car_ale == 2){
        if (arg == 1){
            printf("Messi tirou 2.\n");
        }
        else{
            printf("Voce tirou 2.\n");
        }
    }
    else if(car_ale == 3){
        if (arg == 1){
            printf("Messi tirou 3.\n");
        }
        else{
            printf("Voce tirou 3.\n");
        }
    }
    else if(car_ale == 4){
        if (arg == 1){
            printf("Messi tirou 4.\n");
        }
        else{
            printf("Voce tirou 4.\n");
        }
    }
    else if(car_ale == 5){
        if (arg == 1){
            printf("Messi tirou 5.\n");
        }
        else{
            printf("Voce tirou 5.\n");
        }
    }
    else if(car_ale == 6){
        if (arg == 1){
            printf("Messi tirou 6.\n");
        }
        else{
            printf("Voce tirou 6.\n");
        }
    }
    else if(car_ale == 7){
        if (arg == 1){
            printf("Messi tirou 7.\n");
        }
        else{
            printf("Voce tirou 7.\n");
        }
    }
    else if(car_ale == 8){
        if (arg == 1){
            printf("Messi tirou 8.\n");
        }
        else{
            printf("Voce tirou 8.\n");
        }
    }
    else if(car_ale == 9){
        if (arg == 1){
            printf("Messi tirou 9.\n");
        }
        else{
            printf("Voce tirou 9.\n");
        }
    }
    else{
        if (arg == 1){
            printf("Messi tirou 10.\n");
        }
        else{
            printf("Voce tirou 10.\n");
        }
    }
    if (arg == 1){
        printf("Agora, a Argentina esta com %i pontos.\n", soma);
    }
    else{
        printf("Agora, o Brasil esta com %i pontos.\n", soma);
    }
    
}

void random_cartas(int carta_aleatoria){
    if (carta_aleatoria == 1) {
        printf(" ---------  \n");
        printf("| A       | \n");
        printf("|         | \n");
        printf("|    ^    | \n");
        printf("|         | \n");
        printf("|       A | \n");
        printf(" ---------  \n");
    }
    else if (carta_aleatoria == 2) {
        printf(" ---------  \n");
        printf("| 2       | \n");
        printf("|         | \n");
        printf("|    ^    | \n");
        printf("|    ^    | \n");
        printf("|       2 | \n");
        printf(" ---------  \n");
    }
    else if (carta_aleatoria == 3) {
        printf(" ---------  \n");
        printf("| 3       | \n");
        printf("|    ^    | \n");
        printf("|    ^    | \n");
        printf("|    ^    | \n");
        printf("|       3 | \n");
        printf(" ---------  \n");
    }
    else if (carta_aleatoria == 4) {
        printf(" ---------  \n");
        printf("| 4       | \n");
        printf("|   ^ ^   | \n");
        printf("|         | \n");
        printf("|   ^ ^   | \n");
        printf("|       4 | \n");
        printf(" ---------  \n");
    }
    else if (carta_aleatoria == 5) {
        printf(" ---------  \n");
        printf("| 5       | \n");
        printf("|   ^ ^   | \n");
        printf("|    ^    | \n");
        printf("|   ^ ^   | \n");
        printf("|       5 | \n");
        printf(" ---------  \n");
    }
    else if (carta_aleatoria == 6) {
        printf(" ---------  \n");
        printf("| 6       | \n");
        printf("|   ^ ^   | \n");
        printf("|   ^ ^   | \n");
        printf("|   ^ ^   | \n");
        printf("|       6 | \n");
        printf(" ---------  \n");
    }
    else if (carta_aleatoria == 7) {
        printf(" ---------  \n");
        printf("|7        | \n");
        printf("|  ^   ^  | \n");
        printf("|  ^ ^ ^  | \n");
        printf("|  ^   ^  | \n");
        printf("|        7| \n");
        printf(" ---------  \n");
    }
    else if (carta_aleatoria == 8) {
        printf(" ---------  \n");
        printf("|8        | \n");
        printf("|  ^ ^ ^  | \n");
        printf("|  ^   ^  | \n");
        printf("|  ^ ^ ^  | \n");
        printf("|        8| \n");
        printf(" ---------  \n");
    }
    else if (carta_aleatoria == 9) {
        printf(" ---------  \n");
        printf("|9        | \n");
        printf("|  ^ ^ ^  | \n");
        printf("|  ^ ^ ^  | \n");
        printf("|  ^ ^ ^  | \n");
        printf("|        9| \n");
        printf(" ---------  \n");
    }
    else {
        printf(" ---------  \n");
        printf("|10  ^    | \n");
        printf("|  ^ ^ ^  | \n");
        printf("|  ^ ^ ^  | \n");
        printf("|  ^ ^ ^  | \n");
        printf("|       10| \n");
        printf(" ---------  \n");
    }
}

char cnt_pnt_part(int pontos_arg, int pontos_usu){
    int vencedor;
    if ((pontos_arg > pontos_usu) && (pontos_arg < 21)){
        printf("A Argentina ganhou essa partida de %i s %i. :(\n",pontos_arg, pontos_usu);
        vencedor = 1;
    }
    else if(pontos_usu > 21){
        printf("O Brasil ultrapassou os 21 pontos, logo, a vitoria e da Argentina. ;-;\n");
        printf("A Argentina ganhou essa partida de %i a %i. :(\n",pontos_arg, pontos_usu);
        vencedor = 1;
    }
    else if(pontos_arg == pontos_usu){
    	printf("Houve um empate. Nenhum dos dois paises obteve pontos.\n");
    	vencedor = 3;
	}
    else{
        if (pontos_arg > 21){
            printf("A Argentina ultrapassou os 21 pontos, logo, a vitoria e do Brasil! XD\n");
        }
        printf("O Brasil ganhou essa partida de %i a %i! :)\n", pontos_usu, pontos_arg);
        if (pontos_usu == 21){
            printf("Fazendo os gloriosos 21 pontos\n!");
        }
        vencedor = 2;
    }
    return vencedor;
}

void fim_camp(int camp_bra, int camp_arg){
    printf("\n\n\n");
    if (camp_arg > camp_bra){
        printf("A Argentina venceu o campeonato.\n");
        finalDoJogo1();
    }
    else if(camp_bra == camp_arg){
    	printf("Houve um empate. Tente novamente.\n");
    	jogoDo21();
	}
    else{
        printf("O Brasiiiilll ta de HEXA!!!!!!! \n \n");
        finalDoJogo2(); 
    }
}

void finalDoJogo1(){
	system ("pause");
	system ("cls");
	printf("Infelizmente, a Argentina venceu e o Richarlison, assim como o Brasil, ficou sem o Hexa :( \n \n");
	printf("Tente novamente para trazer a vitoria ao seu pais! \n \n");
	jogoDo21();	
	
}

void finalDoJogo2(){	
	printf("Richarlison voltou para a casa e trouxe o Hexa para o Brasil!!! Agora toda a tristeza dos brasileiros se foi e o dia se tornou um feriado oficial no pais!!! \n \n");
	printf("Agradecemos por jogar o Em Busca do Hexa! Os desenvoldores se esforcaram bastante para que este jogo fosse realizado, esperando pela boa participacao dos usuarios! \n \n");
	printf("Sua jornada acaba aqui, caro jogador! Ate a proxima. \n \n");
    printf(" ______\n");
    printf("-       --_\n");
    printf("            -_\n");
    printf("               -\n");
    printf("________________-\n");
    printf("XXXXXXXXXXXXX   |\n");
    printf("XXXX__XXXXX   __|\n");
    printf("XXX(  )      <_O)\n");
    printf("XXXX|            |\n");
	printf("XX                |\n");
    printf("                 __)\n");
    printf("             --__)\n");
    printf("                 )\n");
    printf("        --_______)\n");
    printf(" |    |    |\n");
    printf(" |     |   |\n");
    printf("___________|\n");
    printf("___________|_\n");
    printf("             --_\n");
    printf("_________        |\n");
    printf("         |    --- |\n");
    printf("             |   ||\n");		
}
