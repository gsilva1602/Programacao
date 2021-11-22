num = int(input('Aperte "5" para exibir a sua tabuada: '))
while(num!=5):
    print("Erro! Aperte somente o número 5")
    num = int(input("Aperte 5 para exibir a sua tabuada: "))
i = 1
while(i<11):
    r = num * i
    print(f'{num} X {i} = {r}')
    i = i + 1