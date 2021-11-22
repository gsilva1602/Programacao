numeros = [10]
comparando = 0
for i in range (0, 10, 1):
    x = int(input('Digite os 10 números: '))
    numeros.append(x)
for i in range (0, 10, 1):
    if(numeros[i]>=comparando):
        comparando = numeros[i]
print(f'O maior número é: {comparando}')