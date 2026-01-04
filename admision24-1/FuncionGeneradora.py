a = int(input())
b = int(input())
x = int(input())

resultados = []

for i in range(x):
    funcion = a + b * i
    resultados.append(funcion)

if x in resultados:
    print('SI')
else:
    print('NO')
