n = int(input("Enter the number of lines : "))
ch = input("Enter the character to display : ")

print()

for i in range(1,n+1):
    for j in range(1,i+1):
        print(ch, end = '')
    print()

print()

for i in range(1,n+1):
    for j in range(1,n+1-i):
        print(" ", end = '')
    for k in range(1,2*i-1+1):
        print(ch, end = '')
    print()
