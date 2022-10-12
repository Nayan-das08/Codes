def swap(a,b):
    temp = a
    a = b
    b = temp
    print(f"a = {a}\tb = {b}")

def func(x, j=0):
    for i in x:
        x[j] = x[j]*2
        j+=1
    print(x)
    

print("\n___________STRINGS___________")
a = input("Enter a : ")
b = input("Enter b : ")
# initial args
print(f"a = {a}\tb = {b}")
swap(a,b)
# after swap, outside function
print(f"a = {a}\tb = {b}")


print("\n___________INT___________")
a = int(input("Enter a : "))
b = int(input("Enter b : "))
# initial args
print(f"a = {a}\tb = {b}")
swap(a,b)
# after swap, outside function
print(f"a = {a}\tb = {b}")


print("\n___________LIST___________")
a = [i for i in range(5)]
b = [i for i in range(6,10)]
print(f"a = {a}")
func(a)
print(f"a = {a}")
print()
print(f"b = {b}")
func(b[:])
print(f"b = {b}")
