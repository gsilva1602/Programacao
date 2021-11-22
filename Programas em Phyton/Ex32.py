a=2
impares=1
d=2
x = int(input('Digite a quantidade de números que deseja somar: '))
while((x<=0) or (x>100)):
    print('Erro! Digite um numero positivo e menor que 100.')
    x = int(input('Digite a quantidade de números que deseja somar: '))
print(f'{a}\n')
for i in range(1, x, 1):
    impares = impares + 2
    a = impares + a
    print(f'{a}\n')
    d = d + a
print(f'A soma da sequência é: {d}')