'''
x = input("Numero: ")
# codifica aquí tus datos de prueba.
x = float(x)
# escribe tu código aquí.
y = (3 * x ** 3) - (2 * x ** 2) + 3 * x - 1  
print("y =", y)
'''

hora = int(input("Hora de inicio (horas): "))
min = int(input("Minuto de inicio (minutos): "))
dura = int(input("Duración del evento (minutos): "))

if True:
    x = 10
else:
    x = 20

# coloca tu código aqui
minT = min + dura 

if minT > 59:
    horaF = hora + (minT // 60)
    minF = minT % 60
    if horaF > 23:
        horaF -= 24
        print(str(horaF) + ":" + str(min))
    else:
        print(str(horaF) + ":" + str(min))

else:
    print(str(hora) + ":" + str(min))
