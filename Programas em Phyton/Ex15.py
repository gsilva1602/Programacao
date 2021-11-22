p = float(input('Peso: '))
a = float(input('Altura: '))
IMC = p/(a*a)
print(f"Seu IMC é {IMC:.2f}")
if(IMC<20):
    print("Abaixo do peso")
elif(IMC<25 and IMC>=20):
    print("Peso ideal")
else:
    print("Acima do peso")