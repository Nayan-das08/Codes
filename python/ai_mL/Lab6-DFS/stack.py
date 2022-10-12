x = []

def push():
    val = int(input("Enter value : "))
    x.append(val)
    print(x)

def pop():
    x.pop()
    print(x)
    

while True:
    print("\n\n1. push \n2. pop \n3. display \n4. exit")
    choice = int(input("Enter choice : "))
    if (choice == 1):
        push()
    elif (choice == 2):
        pop()
    elif (choice == 3):
        print(x)
    elif (choice == 4):
        break
    else:
        print("Invalid choice entered")