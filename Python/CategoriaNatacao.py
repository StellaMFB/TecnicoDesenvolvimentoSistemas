idade = int(input('Digite a sua idade: '))

if idade < 5:
    print('Você ainda não pode participar de nenhuma categoria.')
elif 5 <= idade <= 7:
    print('Sua categoria é Infantil A.')
elif idade <= 11:
    print('Sua categoria é Infantil B.')
elif idade <= 13:
    print('Sua categoria é Juvenil A.')
elif idade <= 17:
    print('Sua categoria é Juvenil B.')
else:
    print('Sua categoria é Adultos.')
    