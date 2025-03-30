programa
{
	
	funcao inicio()
	{
	     real sa
	     real v_v
	     real novo_s
		escreva("Este é um programa para calcular o sálario em função do número de vendas \n")
		escreva("Insira o valor de seu salário atual sem levar em consideração o bônus de vendas \n")
		leia(sa)
		escreva("Insira valor de vendas realizadas neste mês em reais \n")
		leia(v_v)
		se (v_v > 2000)
		{
			novo_s = sa + 50 + v_v * 0.1
			escreva("Seu novo salário é de ",novo_s," reais")	
		}
		senao
		{novo_s = sa + v_v * 0.075
		escreva("Seu novo salário é de ",novo_s," reais")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 461; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */