import sys

if len(sys.argv) < 2:
    print("Insufficient arguments")
    exit(0)

a = int(sys.argv[1])

i=1
while a != 0 and i < a :
    if i == a:
        i=1
    if a%i == 0:
        a = a/i
        a = int(a)
        print(f"{i}\t{a}") 
    i += 1