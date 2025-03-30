programa
{
	
	funcao inicio()
	{
	     real n1, n2
	     inteiro op
	     real conta
		escreva("Essa é uma mini calculadora \n")
		escreva("Insira o primeiro número \n")
		leia(n1)
		escreva("Insira o segundo número \n")
		leia(n2)
		escreva("Caso queira somar esses dois números, digite o número '1' \n")
		escreva("Caso queira subtrair, digite '2'\n")
		escreva("Caso queira multiplicar, digite '3'\n")
		escreva("Caso queira dividir, digite '4' \n")

		leia(op)
		se (op==1)
		{
			conta=n1+n2
		escreva("O resultado da operação foi ",conta)
		}

		senao se (op==2)
		{
			conta=n1-n2
			escreva("O resultado da operação foi ",conta)
		}

		senao se (op==3)
		{
			conta=n1*n2
			escreva("O resultado da operação foi ",conta)
		}

		senao se (op==4)
		{
			conta=n1/n2
			escreva("O resultado da operação foi ",conta)
		}

		senao 
          escreva("Valor errado. Programa encerrado sem cálculos")
		
		
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 126; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */