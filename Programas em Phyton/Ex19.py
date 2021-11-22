a = float(input('Aceleração(m/s²): '))
v0 = float(input('Velocidade Inicial(m/s): '))
t = float(input('Tempo(s): '))
V = v0 + (a*t)
V = V * 3.6
print(f"Velocidade (Km/h): {V}")