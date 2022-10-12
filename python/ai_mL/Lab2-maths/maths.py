from cmath import sin
import math
import sympy

n = int(input("Enter an integer : "))

print()
a = math.sqrt(n)
print(f"sqrt of {n} = {a}")

b = math.factorial(n)
print(f"factorial of {n} = {b}")

c = math.log10(n)
print(f"log of base 10 of {n} = {c}")

d = math.log(n)
print(f"log of base e of {n} = {d}")

print()
m = float(input("Enter a float number : "))

print()
e = math.ceil(m)
print(f"ceil of {m} = {e}")

f = math.floor(m)
print(f"floor of {m} = {f}")

g = math.sin(n)
print(f"sin({n}) = {g}")

h = math.cos(n)
print(f"cos({n}) = {h}")

i = math.tan(n)
print(f"tan({n}) = {i}")
