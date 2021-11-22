a = int(input('Aperte 1 para exibir a série de Bermagaschi: '))
while(a!=1):
    print("Erro! Aperte somente o número 1")
    a = int(input("Aperte 1 para exibir a série de Bermagaschi: "))
i=1
a=1
b=1
c=1
while(i<=20):
    print(f'{a} + {b} + {c} = ')
    d = a + b + c
    print(f'{d}\n')
    a = b
    b = c
    c = d
    i = i + 1