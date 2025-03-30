programa
{
	
	funcao inicio()
	{
	     real vap
	     real novo_valor
		escreva("Este é um programa para calcular qual será o valor do produto após se adicionar o valor do acrescimo (lucro) \n")
		escreva("Insira o valor atual do produto em reais \n")
		leia(vap)
		se (vap < 20)
		{novo_valor = vap * 0.45 + vap
		escreva("O novo valor do produto é de ",novo_valor," reais")
		}
		senao
		{novo_valor = vap * 0.30 + vap
		escreva("O novo valor do produto é de ",novo_valor," reais")
		}
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 254; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */