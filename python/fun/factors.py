import sys

a = sys.argv[1]

a = int(a)

for i in range(2,a):
    if a%i == 0:
        print(i)