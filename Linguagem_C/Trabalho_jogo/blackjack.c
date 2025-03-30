#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int campeonato();
int partida();
int jogada(int arg);
int dsj_fzr_jog(int soma);
void prt_msg_part(int car_ale, int soma, int arg);
void random_cartas(int carta_aleatoria);
int cnt_pnt_part(int pontos_arg, int pontos_usu);
void fim_camp(int camp_bra, int camp_arg);

int main(){
    int b, ret = -1;
    printf("Este campeonato ira determinar o futuro do pais, se você ganhar, o Brasil leva o tao esperado Hexa para casa!\n");
    printf("Caso contrario, você sera amaldicoado pelo seu povo, para todo o sempre!\n");
    printf("Quem ganhar a maior quantidade de 3 partidas ganha.\n");
    printf("Por isso, pense bem em suas jogadas. Boa sorte! Ou nao...\n");
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
        }
        else{
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

int partida(){
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
        printf("Messi: 'Agora e a minha vez de jogar!'\n");
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
        prt_msg_part(car_ale, soma, arg);
        if (soma > 21){
            break;
        }
    }
    return soma;
}

int dsj_fzr_jog(int soma){
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
        if (ret2 == 0){
            printf("Eu disse numero inteiro imbecil.\n");
        }
    }while (ret2 == 0);
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

void prt_msg_part(int car_ale, int soma, int arg) {
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

int cnt_pnt_part(int pontos_arg, int pontos_usu){
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
        printf("A Argentina venceu o campeonato.");
    }
    else{
        printf("O Brasiiiilll ta de HEXA!!!!!!!");
    }
}
