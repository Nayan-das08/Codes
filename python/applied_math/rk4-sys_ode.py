# runga kutta for system of ODEs

import math

def f1(x,y1,y2):
    return (y1*y2) + x

def f2(x,y1,y2):
    return (x*y2) + y1

def showAllValues(x, y):
    print()
    for i in range(len(x_val)):
        print(f"{'%.2f'%x_val[i]}    ->    {'%.9f'%y1_val[i]}    ->    {'%.9f'%y2_val[i]}")


# for storing the values obtained
x_val = []
y1_val = []
y2_val = []

#print("ODE : y' = sin(x+y) - exp(x)")
print("\nInitial conditions")
x = 0
y1 = 1
y2 = -1
x_val.append(x)
y1_val.append(y1)
y2_val.append(y2)

h = 0.1
a = x
b = float(input("\nEnter x at which y(x) is to be calculated : "))
h = float(input("Enter width of intervals : "))
n = round((b-a)/h)

print('\n')
for i in range(n):
    k1 = h*f1(x,y1, y2)
    k2 = h*f1(x+(h/2),  y1+(k1/2),  y2)
    k3 = h*f1(x+(h/2),  y1+(k2/2),  y2)
    k4 = h*f1(x+h,      y1+k3,      y2)
    p = k1 + 2*(k2 + k3) + k4
    p = p/6
    #y1 = y1 + p
    
    print(f"k1 = {'%0.9f'%k1}")
    print(f"k2 = {'%0.9f'%k2}")
    print(f"k3 = {'%0.9f'%k3}")
    print(f"k4 = {'%0.9f'%k4}\n")
    
    print(f"k1 = {'%0.9f'%k1}")
    print(f"k2 = {'%0.9f'%k2}")
    print(f"k3 = {'%0.9f'%k3}")
    print(f"k4 = {'%0.9f'%k4}\n")
    
    k1 = h*f2(x,y1,y2)
    k2 = h*f2(x+(h/2),  y1, y2+(k1/2))
    k3 = h*f2(x+(h/2),  y1, y2+(k2/2))
    k4 = h*f2(x+h,      y1, y2+k3)
    q = k1 + 2*(k2 + k3) + k4
    q = q/6

    y1 = y1 + p
    y2 = y2 + q
    
    x = x + h
    print(f"y1-{i+1}  = {'%0.9f'%y1}")
    print(f"y2-{i+1}  = {'%0.9f'%y2}\n")
    print("\n------------------------------------\n")

    
    x_val.append(x)
    y1_val.append(y1)
    y2_val.append(y2)

print(f"\nafter {n} iterations")
print(f"    x  = {'%.1f'%x}")
print(f"    y1 = {y1}")
print(f"    y2 = {y2}")

