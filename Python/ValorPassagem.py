idade = int(input('Digite a idade do cliente: '))
valor = float(input('Digite o valor integral da passagem: '))

if idade <= 5 or idade > 65:
    print('Não paga.')
elif idade < 18:
    print(f'Paga meia passagem: {valor / 2} reais.')
else:
    print(f'Paga o valor integral da passagem: {valor} reais.')
