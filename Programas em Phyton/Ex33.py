numeros = [10]
for i in range (0, 10, 1):
    x = int(input('Digite um número: '))
    numeros.append(x)
print('Os números que você digitou foram: ')
for i in range (10, 0, -1):
    print(numeros[i])