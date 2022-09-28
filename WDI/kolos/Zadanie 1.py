#Pervov Maksym, grupa 1.8/15
#Zadanie 1

def rev(tekst):
    return tekst[::-1]

def pal(tekst):
    return tekst == rev(tekst)

tekst_1 = input('Wprowadż tekst: ')

tekst_1 = tekst_1.upper()

forbidden = (',', '.', '!', '?', ';', ':', '-', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9')

for i in tekst_1:
    if i in forbidden:
        tekst_1 = tekst_1.replace(i, '')
if (pal(tekst_1)):
    print('Ten tekst jest palindromem')
else:
    print('Ten tekst nie jest palindromem')