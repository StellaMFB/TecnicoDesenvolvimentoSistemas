programa
{
	
	funcao inicio()
	{
	real peso, altura, imc
		escreva("Programa que calcula o IMC \n")
		escreva("Informe o seu peso \n")
		leia(peso)
		
		escreva("Informe sua altura \n")
		leia(altura)
		
		imc=peso/(altura*altura)
		escreva("Seu IMC é ",imc,"\n")

		se (imc<=18.5)
		escreva("Você está abaixo do peso")

		senao se (imc<=24.9)
		escreva("Parabéns, você está no peso ideal")

		senao se (imc<=29.9)
		escreva("Você está levemente acima do peso")

		senao se (imc<=34.9)
		escreva("Você tem obesidade grau I")

		senao se (imc<=39.9)
		escreva("Você tem obesidade grau II")

		senao 
		escreva("Você tem obesidade grau III")
		
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 644; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */