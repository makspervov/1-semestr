# Metoda Monte-Carlo

import random
n = 0.01
licznik = 0
for i in range(0, 2):
    x = random.random()
    y = random.random()
    r = x**3
    if y < r:
        licznik += 1
print("Wartość pola powierzchni: ", r*licznik/n)