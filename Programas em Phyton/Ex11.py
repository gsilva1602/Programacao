v1 = float(input('Digite o primeiro valor: '))
v2 = float(input('Digite o segundo valor: '))
if(v1>v2):
    print(f"{v1:.0f} é maior")
elif(v2>v1):
    print(f"{v2:.0f} é maior")
else:
    print("São idênticos!")