programa
{
	
	funcao inicio()
	{
	     inteiro idade
	     escreva("Este é um programa que determina em qual categoria de natação do mundial você irá ficar, de acordo com a sua idade \n")
		escreva("Insira a sua idade \n")
		leia(idade)

		se (idade<5)
		escreva("Você não pode participar!")

		senao se (idade<=7)
		escreva("Sua categoria é Infantil A")

		senao se (idade<=10)
		escreva("Sua categoria é Infantil B")

		senao se (idade<=13)
		escreva("Sua categoria é Juvenil A")

		senao se (idade<=17)
		escreva("Sua categoria é Juvenil B")

		senao
		escreva("Sua categoria é Sênior")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 225; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */