programa
{
	
	funcao inicio()
	{
	cadeia genero
	real peso_ideal
	real altura
	escreva("Esse é um programa para calcular o peso ideal \n")
	escreva("Escreva f para feminino e m para masculino \n")
	leia(genero)
	escreva("Insira sua altura \n")
	leia(altura)
	se (genero == "m")
	{
		peso_ideal = 52+(0.75*(altura-152.4))
	escreva("Seu peso ideal é ",peso_ideal)
	}
	senao
	{peso_ideal = 52+(0.67*(altura-152.4))
	escreva("Seu peso ideal é ",peso_ideal,"\n")
	escreva("Fim!")
	}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 457; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */