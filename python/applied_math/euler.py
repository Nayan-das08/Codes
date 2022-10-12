# sample problem as shown in ppt

import math as m
import os

def f(x,y):
    a = m.log(x)
    b = m.sin(x)
    return (a*b)

def showAllValues(x, y):
    print()
    print("     x\t\t\t  y")
    for i in range(len(x_val)):
        print(f"{'%.8f'%x_val[i]}    ->    {'%.9f'%y_val[i]}")


# for storing the values obtained
x_val = []
y_val = []

os.system('cls')
print("SOLVING ODE USING EULER METHOD\n")
print("ODE : y' = ln(x) * sin(x)")
print("\nInitial conditions")
x = float(input("    Enter x0    : "))
print(f"    Enter y({int(x)})  : ", end='')
y = float(input())
x_val.append(x)
y_val.append(y)

h = 0.1
a = x
b = float(input("\nEnter x at which y(x) is to be calculated : "))
h = float(input("Enter width of intervals : "))
n = round((b-a)/h)

for i in range(n):
    y = y + (h*f(x,y))
    x = x + h
    x_val.append(x)
    y_val.append(y)

showAllValues(x_val, y_val)

print(f"\nafter {n} iterations")
print(f"    x = {'%.1f'%x}")
print(f"    y = {y}")
