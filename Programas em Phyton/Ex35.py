numeros = [20]
constante = 5
for i in range (0, 20, 1):
    x = int(input('Digite 20 números: '))
    numeros.append(x)
print('Os números digitados multiplicados por 5 são: \n')
for i in range (1, 21, 1):
    numeros[i]=constante*numeros[i]
    print(f'{numeros[i]}')
