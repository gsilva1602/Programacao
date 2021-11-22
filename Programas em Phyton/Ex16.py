a = float(input('Digite o primeiro numero: '))
b = float(input('Digite o segundo numero: '))
c = float(input('Digite o terceiro numero: '))
if((a==b) and (a==c) and (b==c)):
    print("Triângulo Equilátero")
elif(a!=b and a!=c and b!=c):
    print("Triângulo Escaleno")
else:
    print("Triângulo Isósceles")