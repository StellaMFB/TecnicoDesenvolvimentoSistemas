nota = int(input('Digite a nota do aluno: '))

if nota >= 9:
    print('Sua menção foi MB')
elif nota >= 7:
    print('Sua menção foi B')
elif nota >= 4:
    print('Sua menção foi R')
else:
    print('Sua menção foi I')
