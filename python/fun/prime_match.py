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

a,b = int(sys.argv[1]),int(sys.argv[2])
vars=[]
vars.append(a)
vars.append(b)


for x in vars:
    for i in range(2,x):
        if x%i == 0:
            check(i)
    print()

i=2
while i<=a and i<=b:
    print(f"{i}\t", end='')
    if a&i == 0 and b%i == 0:
        print(f"{i}")
    else:
        print()
    i+=1