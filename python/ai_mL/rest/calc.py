# simple calc using do-while loop, if-else statementsand boolean variables 

print("SIMPLE CALCULATOR\n")

choice = True
while choice:
  a = int(input("enter a : "))
  b = int(input("enter b : "))

  print("\nPress 1 for addition")
  print("Press 2 for subtraction")
  print("Press 3 for multiplication")
  print("Press 4 for division")

  op = int(input("\nEnter choice : "))

  if (op == 1):
    print(a, "+", b, " = ", a+b)
  elif (op == 2):
    print(a, "-", b, " = ", a-b)
  elif (op == 3):
    print(a, "*", b, " = ", a*b)
  elif (op == 4):
    print(a, "/", b, " = ", a/b)
  else:
    print("invalid choice entered!")

  ch = int(input("\ncontinue ? (0 for no) : "))
  if (ch == 0):
    choice = False
  else:
    print("\n-----------------\n")