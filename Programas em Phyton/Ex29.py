a = int(input('Aperte 1 para exibir a soma dos números até 100: '))
while(a!=1):
    print("Erro! Aperte somente o número 1")
    a = int(input("Aperte 1 para exibir a soma dos números até 100: "))
i = 1
b = 1
while(i<=100):
    print(f'{b} + {i} = ')
    b = b + i
    print(f'{b}\n')
    i = i + 1