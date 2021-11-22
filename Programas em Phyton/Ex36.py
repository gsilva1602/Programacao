numeros = [20]
constante = 5
for i in range (0, 20, 1):
    x = int(input('Digite 20 números: '))
    numeros.append(x)
for i in range (0, 20, 1):
    for j in range (i+1, 20, 1):
        if(numeros[i]>numeros[j]):
            aux = numeros[i]
            numeros[i]=numeros[j]
            numeros[j]=aux
print("Os números multiplicados e ordenados são: \n")
for i in range (-1, 19, 1):
    numeros[i] = constante * numeros[i]
    print(f'{numeros[i]}')        
