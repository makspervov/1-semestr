#Pervov Maksym, grupa 1.8/15
#Zadanie 3
#x=7
def ciag(n):
    if n == 1:
        return 7
    else:
        return 2*ciag(n-1) + ciag(1)
#n = int(input("Podaj ciąg n: "))
#print(ciag(n))

for i in range (1, 10):
    print(i,ciag(i))
