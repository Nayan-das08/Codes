import sys
from random import randint
from random import choice

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

# for k in range(len(str)):
#     if k < len(str)-1:
#         j=0
#         for i in range(len(str)):
#             if (k+j) >= len(str):
#                 j=0
#             print(str[k+j], end=' ')
#             # print(f"{k},{j} ",end='')
#             j += 1
#         print()
#     if k == len(str)-1:
#         for i in range(len(str)):
#             print(str[-i-1], end=' ')


# print(list(range(1,len(str)-1)))

# print(' ', end=' ')
# for i in range(len(str)):
#     print(i, end=' ')
# print()

for i in range(len(str)):
    # print(f"{i} ", end='')
    if i == 0:
        for j in range(len(str)):
            print(str[j], end=' ')
        print()

    elif i < len(str)-1:
        x = choice(str)
        print(str[i], end=' ')
        if i%2 == 1:
            for j in range(1,len(str)-1):
                if (i+j)%2 == 0:
                    print(' ',end=' ')                
                else:
                    print(x, end=' ')
        else:
            for j in range(1,len(str)-1):
                if (i+j)%2 == 0:
                    print(' ',end=' ')                
                else:
                    print(x, end=' ')
        print(str[-1-i])
    
    else:
        for j in range(len(str)):
            print(str[-j-1], end=' ')

# print('\n')
# for i in range(len(str)):
#     if i == 0:
#         for j in range(len(str)):
#             print(str[j],end=' ')
#         print()
    
#     elif i < len(str)-1:
#         print(str[i] + space + str[-1-i])
    
#     else:
#         for j in range(len(str)):
#             print(str[-1-j], end=' ')
print('\n')