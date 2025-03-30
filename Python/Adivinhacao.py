from random import randint

n = randint(1, 5)
op = int(input('Tente acertar o número escolhido! '))

while op < 1 or op > 5:
    print('O número digitado não corresponde ao intervalo de 1 e 5.')
    op = int(input('Digite outro número: '))
if n == op:
    print('Parabéns! Você acertou.')
else:
    print(f'Infelizmente você errou! O número sorteado foi {n}.')
