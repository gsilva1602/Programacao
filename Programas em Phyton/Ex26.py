num = int(input('Digite um número de 1 a 10 para exibir a sua tabuada: '))
while(num<=0):
    print("Erro! Somente números de 1 a 10")
    num = int(input('Digite um número de 1 a 10 para exibir a sua tabuada: '))
i = 1
while(i<11):
    r = num * i
    print(f'{num} X {i} = {r}')
    i = i + 1 