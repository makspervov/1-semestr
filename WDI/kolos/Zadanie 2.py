#Pervov Maksym, grupa 1.8/15
#Zadanie 2
x = 7
a = input("a = ")
i = len(a)
suma = int(a[0])
for ii in range(1, i):
    suma = suma * x + int(a[ii])

print("Wynik: ", suma)