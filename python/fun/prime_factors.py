import sys

def check(n):
    prime = 1
    for i in range(2,n):
        if n%i == 0:
            prime = 0
    if prime == 1:
        print(f"{n}'")
    else:
        print(n)

a = sys.argv[1]
a = int(a)

for i in range(2,a):
    if a%i == 0:
        check(i)