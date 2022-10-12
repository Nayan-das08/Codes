import math

def f(x,y):
    return ()

def showAllValues(x, y):
    print()
    for i in range(len(x_val)):
        print(f"{'%.2f'%x_val[i]}    ->    {'%.9f'%y_val[i]}")


# for storing the values obtained
x_val = []
y_val = []

#print("ODE : y' = sin(x+y) - exp(x)")
print("\nInitial conditions")
y = float(input("    Enter y0 : "))
x = float(input("    Enter x0 : "))
x_val.append(x)
y_val.append(y)

h = 0.1
a = x
b = float(input("\nEnter x at which y(x) is to be calculated : "))
h = float(input("Enter width of intervals : "))
n = round((b-a)/h)

print('\n')
for i in range(n):
    k1 = h*f(x,y)
    k2 = h*f(x+(h/2), y+(k1/2))
    k3 = h*f(x+(h/2), y+(k2/2))
    k4 = h*f(x+h, y+k3)
    temp = k1 + 2*(k2 + k3) + k4
    temp = temp/6
    y = y + temp
    x = x + h
    print(f"k1 = {'%0.9f'%k1}")
    print(f"k2 = {'%0.9f'%k2}")
    print(f"k3 = {'%0.9f'%k3}")
    print(f"k4 = {'%0.9f'%k4}")
    print(f"y  = {'%0.9f'%y}\n")
    x_val.append(x)
    y_val.append(y)

print(f"\nafter {n} iterations")
print(f"    x = {'%.1f'%x}")
print(f"    y = {y}")

