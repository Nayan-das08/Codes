def find_Set(u,Set):
	for a,i in enumerate(Set):
		# print(f"i = {i}")
		for j in range(len(i)):
			if i[j] == u:
				# print(f"{u} found at {i},{j}")
				return a

def Union(p,q,Set):
	a = Set[p]
	b = Set[q]
	Set.remove(a)
	Set.remove(b)
	for i in b:
		a.append(i)
	Set.append(a)
	print(Set)

# -----------------------------------------------------

# no. of vertices
n = 8

mat = [
		(0,1,2,3,4,5,6,7,8),
		(1,0,5,0,0,4,0,6,0),
		(2,5,0,3,0,2,4,0,0),
		(3,0,3,0,2,0,1,0,0),
		(4,0,0,2,0,0,2,0,0),
		(5,4,2,0,0,0,6,3,0),
		(6,0,4,1,2,6,0,7,4),
		(7,6,0,0,0,3,7,0,8),
		(8,0,0,0,0,0,4,8,0),
];

edges = []

# get edges
for i in range(1,len(mat)):
	for j in range(i+1, len(mat)):
		if (mat[i][j] > 0):
			edges.append({'a':i, 'b':j, 'w':mat[i][j]})
			# print(mat[i][j])

# sort edges
edges.sort(key= lambda x:x['w'])

# show edges
print('edges in the Graph are :-')
for i in range(len(edges)):
	print(f"    {edges[i]['a']}, {edges[i]['b']}   -> {edges[i]['w']}")

print('\nThe Algorithm starts here :-\n')
Set = [[1],[2],[3],[4],[5],[6],[7],[8]]
print(Set)

# main Algorithm
MST_edges = []
for i in range(len(edges)):
	print('\n')
	u = edges[i]['a']
	v = edges[i]['b']
	p = find_Set(u,Set)
	q = find_Set(v,Set)
	print(f"{u}, {v}  -> {p}, {q}")
	if p != q:
		Union(p,q,Set)
		# add the edge to the MST
		MST_edges.append(edges[i])
	else:
		print('rejected')

cost = 0

# displaying the edges of MST and calculating the cost
print('\nEdges in the MST')
for i in range(len(MST_edges)):
	print(f"    {MST_edges[i]['a']}, {MST_edges[i]['b']}   -> {MST_edges[i]['w']}")
	cost += MST_edges[i]['w']

print(f"\ncost of MST = {cost}")

# Adjacency Matrix of MST
MST = [
	[0,0,0,0,0,0,0,0,0],
	[0,0,0,0,0,0,0,0,0],
	[0,0,0,0,0,0,0,0,0],
	[0,0,0,0,0,0,0,0,0],
	[0,0,0,0,0,0,0,0,0],
	[0,0,0,0,0,0,0,0,0],
	[0,0,0,0,0,0,0,0,0],
	[0,0,0,0,0,0,0,0,0],
	[0,0,0,0,0,0,0,0,0]
]

for i in range(n+1):
	MST[0][i] = i
	MST[i][0] = i

for edge in MST_edges:
	u = edge['a']
	v = edge['b']
	w = edge['w']
	MST[u][v] = w
	MST[v][u] = w

print('\nAdjacency Matrix of MST :-')
for i in range(n+1):
	print(MST[i])
