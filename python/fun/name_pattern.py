import sys

if len(sys.argv) == 1:
    str = input("\nEnter string : ")
elif len(sys.argv) == 2:
    str = sys.argv[1]
else:
    print("Error: Invalid number of arguments")
    exit(0)

print('\n')
l = len(str)-2
space = ' '*(2*l+1)

for i in range(len(str)):
    if i == 0:
        for j in range(len(str)):
            print(str[j],end=' ')
        print()
    
    elif i < len(str)-1:
        print(str[i] + space + str[-1-i])
    
    else:
        for j in range(len(str)):
            print(str[-1-j], end=' ')
print('\n')
