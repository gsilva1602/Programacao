a = int(input('Aperte 1 para exibir a série de Fibonacci: '))
while(a!=1):
    print("Erro! Aperte somente o número 1")
    a = int(input("Aperte 1 para exibir a série de Fibonacci: "))
i=1
a=1
c=1
while(i<=30):
    print(f'{a} + {c} = ')
    b = a + c
    print(f'{b}\n')
    a = c
    c = b
    i = i + 1