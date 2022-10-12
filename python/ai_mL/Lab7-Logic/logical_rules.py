print("The propositions are :-")
str1 = print("  *  It is raining ")
str2 = print("  *  I carry an Umbrella")

print()
a = int(input("Set the value for first String   : "))
b = int(input("Set the value for second String  : "))

if a == 1:
    A = True
else:
    A = False

if b == 1:
    B = True
else:
    B = False

print()
if A == True and B == True:
    print("Both the statements are True")
elif A == True or B == True:
    print("One of the statement is True")
    if A == True:
        print("It is raining")
    else:
        print("I carry an Umbrella")
else:
    print("Both statement are False")
    
print()
# implication as disjuction
if (not A) or B :  
    print("implication :-") 
    print("    If it rains then I carry an Umbrella")
                
# biconditional as disjuction
if ((not A) or B) and ((not B) or A):
    print("bicondition :-") 
    print("   If and only if it rains then I carry an Umbrella")
