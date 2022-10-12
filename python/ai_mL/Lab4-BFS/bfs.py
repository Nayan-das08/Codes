#V = list(range(6))
graph = [(0,1), (0,2), (1,3), (1,4), (2,4), (3,5), (4,5)]

tree = [(0,1), (0,2), (0,3), (1,4), (1,5), (3,6), (3,7),
    (6,8), (8,9), (8,10)]

print("BREADTH FIRST SEARCH TRAVERSAL\n")

# get data structure from the user
print("\t1. Graph \n\t2. Tree")
choice = int(input("Enter choice : "))
while True:
    if (choice == 1):
        E = graph
        V = list(range(6))
        break
    elif (choice == 2):
        E = tree
        V = list(range(11))
        break
    else:
        print("\nInvalid choice entered")
        choice = int(input("Enter again : "))

queue = []      # for bfs
output = []     # for final output
visited = []    # to keep track of vertices visited

# get starting point of BFS from user
start = int(input("Starting point of BFS : "))
while True:
    if (start not in V):
        print("\nInvalid vertex ID entered")
        start = int(input("Enter again : "))
    else:
        break

# the first vertex of BFS is appended 
# to queue[] as well as visited[]
queue.append(start)
visited.append(start)

while queue:
    print(f"\nqueue   = {queue}")
    print(f"visited = {visited}")

    v = queue.pop(0)    # first element in queue[] is popped
    output.append(v)    # and appended to output[]
    
    for e in E:     # e -> tuple in E     
        a = e[0]
        b = e[1]
        if (v == a) and (b not in visited):
            queue.append(b)
            visited.append(b)
        elif (v == b) and (a not in visited):
            queue.append(a)
            visited.append(a)

print(f"\n\nbfs = {output}")
