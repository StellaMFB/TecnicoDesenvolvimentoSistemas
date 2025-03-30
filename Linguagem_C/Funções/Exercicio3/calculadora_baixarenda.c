#include <stdio.h>
#include <stdlib.h>

 

void menuPrincipal();
void funcaoCapturarValores(int);
void funcaoSomar(int , int);
void mostrarResultado(float);
void funcaoSubtrair(int, int);
void funcaoMultiplicar(int, int);
void funcaoDividir(float, float);

 

int main(){
    
    menuPrincipal();
    
}

 

void menuPrincipal(){
    
    int opcaoUsuario;
    printf("** Calculadora baixa renda ** \n\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");
    
    scanf("%i", &opcaoUsuario);
    
    switch(opcaoUsuario){
        case 1:
            funcaoCapturarValores(1);
            break;
        case 2:
        	funcaoCapturarValores(2);
        	break;
         case 3:
        	funcaoCapturarValores(3);
        	break;
         case 4:
        	funcaoCapturarValores(4);
        	break;
        default:
            system("cls");
            printf("Nao existe essa opcao, orelhudo\n\n");
            menuPrincipal();
    }
        
}

 

void funcaoCapturarValores(int opcaoUsuario){
    
    int A, B;
    printf("Informe o primeiro valor: \n");
    scanf("%i", &A);
    printf("Informe o segundo valor: \n");
    scanf("%i", &B);
    
    switch(opcaoUsuario){
        case 1:
            funcaoSomar(A,B);
            break;
        case 2:
        	funcaoSubtrair(A,B);
        	break;
         case 3:
        	funcaoMultiplicar(A,B);
        	break;
         case 4:
        	funcaoDividir(A,B);
        	break;
    }
 
}

 

void funcaoSomar(int A, int B){
    
    float resultadoSoma = A + B;
    mostrarResultado(resultadoSoma);
    
}

void funcaoSubtrair(int A, int B){
	float resultadoSubtracao = A - B;
    mostrarResultado(resultadoSubtracao);
}

void funcaoMultiplicar(int A, int B){
	float resultadoMultiplicacao = A * B;
    mostrarResultado(resultadoMultiplicacao);
}

void funcaoDividir(float A, float B){
	if (B == 0){
		menuPrincipal();
	}
	float resultadoDivisao = A / B;
    mostrarResultado(resultadoDivisao);
}

 

void mostrarResultado(float result){
    
    printf("O resultado eh: %.2f \n", result );
    menuPrincipal();
}
