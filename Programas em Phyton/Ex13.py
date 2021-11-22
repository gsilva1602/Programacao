b = float(input('Base: '))
h = float(input('Altura: '))
A = b * h
print(f"A área do retângulo é {A}")
if(A>=100):
    print("Terreno grande")
else:
    print("Terreno pequeno")