programa
{
	
	funcao inicio()
	{
		real n1, n2, n3, n4, media

          escreva("Este é um programa que calcula a média de quatro notas! \n")
		escreva("Insira a primeira nota \n")
		leia(n1)
		escreva("Insira a segunda nota \n")
		leia(n2)
		escreva("Insira a terceira nota \n")
		leia(n3)
		escreva("Insira a quarta nota \n")
		leia(n4)
          media = (n1+n2+n3+n4)/4
          escreva("Sua média é ",media,"\n")
          se (media >= 7)
          escreva("Você foi aprovado!")
          senao
          escreva("Você foi reprovado!")
          
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 61; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */