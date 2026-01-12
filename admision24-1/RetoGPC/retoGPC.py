# def pedir_valores():
#     a = int(input())
#     b = int(input())
#     x = int(input())
#     if (a < 1 or a > 6) or (b < 1 or b > 6) or (x < 20 or x > 1000):
#         pedir_valores()
#
#     return a, b, x
#
#
# a, b, x = pedir_valores()
#
# print(a, b, x)

a = int(input())

b = int(input())

x = int(input())

serie = 0
encontrado = False

for i in range(x):
    serie += a
    if serie == x:
        encontrado = True
        break
    serie += b
    if serie == x:
        encontrado = True
        break

if encontrado:
    print("usa botas")
else:
    print("usa zapatillas")
