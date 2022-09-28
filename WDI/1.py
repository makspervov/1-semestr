#Metoda trapezów

print("Metoda trapezów")
print("Znachodzenia pola pod krzywą y = x^3")
def trap(f, a, b, h):
    # a = 0
    # b = 2
    s = (f(a)+f(b))/2
    x = a+h
    while(x <= b - h):
        s += f(x)
        x += h
    return h*s

def test():
    print("Wartość: " + str(trap(lambda x: x**3, 0, 2, 0.001)))
    print("Dokładna wartość: " + str(((2**4)/4) - ((0**4)/4)))

test()