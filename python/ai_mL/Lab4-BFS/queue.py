def enqueue(q):
    val = int(input("Enter value : "))
    q.append(val)

def dequeue(q):
    q.pop(0)

#_________________________
q = []

for i in range(5):
    enqueue(q)
    print(q)

for i in range(3):
    dequeue(q)
    print(q)