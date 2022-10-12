# tsp_bnbpy
import numpy as np
from os import system
import copy

def show(X):
	# print()
	for i in range(len(X)):
		for j in range(len(X)):
			if X[i][j] == np.Inf:
				print('   ∞', end='')
			else:
				print(f'  {X[i][j]:2}', end='')
		print()
	print()

def reduce(X):
	cost = 0

	# row reduction
	temp = X.copy()
	red = [0]
	for row in temp[1:]:
		# row.pop(0)
		m = min(row[1:])
		red.append(m)

	for i in range(len(temp)):
		if i != 0:
			row = [i]
			row = row + [temp[i][j]-red[i] for j in range(1,len(X))]
			temp[i] = row

	# show(temp)
	cost += sum(red)

	# coloumn reduction
	red = [0]
	for x in range(1,len(X)):
		col = [temp[i][x] for i in range(1,len(X))]
		m = min(col)
		red.append(m)

	for i,row in enumerate(temp):
		if i != 0:
			temp[i] = [temp[i][j]-red[j] for j in range(len(X))]
	# show(temp)	
	cost += sum(red)

	# print(cost)
	return temp,cost

def reduce_2 (A,x,y):
	cost = 0

	# row reduction
	temp = A.copy()
	red = [0]
	for i,row in enumerate(temp[1:]):
		m = min(row[1:])
		if m == np.Inf:
			m = 0
		# if i+1 == x:
		# 	m = 0
		# else:
		# 	m = min(row[1:])
		red.append(m)

	for i in range(len(temp)):
		if i != 0:
			row = [i]
			row = row + [temp[i][j]-red[i] for j in range(1,len(A))]
			temp[i] = row

	cost += sum(red)

	# coloumn reduction
	red = [0]
	for j in range(1,len(A)):
		col = [temp[i][j] for i in range(1,len(A))]
		m = min(col)
		if m == np.Inf:
			m = 0
		red.append(m)
	red[y] = 0

	for i,row in enumerate(temp):
		if i != 0:
			temp[i] = [temp[i][j]-red[j] for j in range(len(A))]
	
	cost += sum(red)
	return temp,cost

def algo(A,x,y,r):
	# print(f'for ({x},{y})')

	temp = copy.deepcopy(A)
	for a in range(1,len(temp)):
		temp[x][a] = temp[a][y] = np.Inf
	temp[y][1] = np.Inf

	# show(temp)
	
	a,b = reduce_2(temp,x,y)
	# if b > 0:
	# 	print(f'reduced ({x},{y})')
	# 	show(a)
	# print(f'reduction cost = {b}')
	total_cost = r + A[x][y] + b
	# print('\n-----------------------------------\n')
	return a,total_cost

# ----------------------------------

system('cls')
z = np.Inf

# A = [
# 	[0,  1,  2,  3,  4,  5],
# 	[1,  z, 20, 30, 10, 11],
# 	[2, 15,  z, 16,  4,  2],
# 	[3,  3,  5,  z,  2,  4],
# 	[4, 19,  6, 18,  z,  3],
# 	[5, 16,  4, 7,  16,  z]
# ]

A = [
	[0,  1,  2,  3,  4,  5],
	[1,  z,  7,  3, 12,  8],
	[2,  3,  z,  6, 14,  9],
	[3,  5,  8,  z,  6, 18],
	[4,  9,  3,  5,  z, 11],
	[5, 18, 14,  9,  8,  z]
]

print('original matrix')
show(A)
A, root_cost = reduce(A)

print('reduced matrix')
show(A)

print('\n-------------------------------------\n')

root = 1
node = root
r = root_cost
neighbours = [2,3,4,5]
path = [node]
curr_matrix = A

while len(neighbours) > 0:
	print(f'for node {node}')
	cost_list = []
	matrices = []
	for i in neighbours:
		matrix, cost = algo(curr_matrix, node, i, r)
		cost_list.append(cost)
		matrices.append(matrix)
	chosen_node = neighbours[cost_list.index(min(cost_list))]
	print(f'    neighbours = {neighbours}')
	print(f'    costs = {cost_list}')
	print(f'    least cost at {chosen_node}')
	# update values
	neighbours.remove(chosen_node)
	node = chosen_node
	path.append(node)
	r = min(cost_list)
	curr_matrix = matrices[cost_list.index(min(cost_list))]
	# print(f'root node cost = {r}')
	print()

path.append(root)

print('Final Path is : ')
for i in path:
	print(f'{i} -> ', end='')
print('\b\b\b  ')



# ├── Array_Misc
# └── tsp_bnb.py