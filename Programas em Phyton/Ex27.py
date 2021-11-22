X = int(input('Digite um número qualquer: '))
while(X<=0):
    print("Erro! Somente números positivos")
    X = int(input("Digite um número qualquer: "))
A = int(input('No intervalo de: '))
B = int(input('Até: '))
while(B<A):
    print("O segundo número deverá ser maior que o primeiro")
    B = int(input('Até: '))
for i in range(B, A-1, -1):
    r = X * i
    print(f'{X} X {i} = {r}')