# floyd-warshall

import numpy as np
from os import system

def show(x, name=''):
	space = ' '*len(name)+'   '
	print(f"\n{name} : ", end='')

	for i in range(len(x)):
		if i == 0:	# column indices
			for j in x[0]:
				if j == 0:
					print(f"{int(j):2} |",end=' ')
				else:
					print(f"{int(j):2}",end=' ')
			# horizontal line
			print(f'\n{space}--',end='')
			for j in range(len(x)):
				print('---',end='')
		else:
			print(space,end='')
		if i != 0:
			for j in range(len(x)):
				if j == 0:	# row indices
					print(f"{int(x[i][j]):2} |", end=' ')
				else:
					if x[i][j] == np.Inf:
						print(f" ∞", end=' ')
					else:
						print(f"{int(x[i][j]):2}", end=' ')
		print()

def min(a,b):
	if a < b:
		return a
	else:
		return b

def floyd_warshall(W,D,path):
	# -------------algo starts here-------------
	# set D[0] as the Adjacency Matrix
	D[0] = W

	# set path[0] matrix from D[0]
	for i in range(1,n):
		for j in range(1,n):
			if (D[0][i][j] == 0) or (D[0][i][j] == np.Inf):
				path[0][i][j] = -1
			else:
				path[0][i][j] = i



	for k in range(1,n):
		path[k] = path[k-1]
		for i in range(1,n):
			for j in range(1,n):
				D[k][i][j] = min(D[k-1][i][j], D[k-1][i][k] + D[k-1][k][j])
				if D[k][i][j] != D[k-1][i][j]:
					path[k][i][j] = k

	print('\n--------------------------------------------')
	print('\nAfter computing D[4] and \nΠ[4] matrices iteratively :-')
	show(D[4], 'D[4]')
	show(path[4], 'Π[4]')

	# for i in range(len(D)):
	# 	show(D[i], f'D[{i}]')
	# 	show(path[i], f'P[{i}]')
	# 	print('\n--------------------------------------------------')

def give_path(path, start, end):
	print(f'{start} -> {end}   ----   {start} ->',end='')
	resolve_path(path, start, end)
	backspace(3)
	print(f'\t\t')

def resolve_path(path, start, end):
	# print(f'give_path({start}, {end})')
	parent = int(path[4][start][end])
	if parent != start:
		resolve_path(path, start, parent)
		# print(f'{parent}',end='')
		resolve_path(path, parent, end)
	else:
		# print(f'{start} -> {end}')
		print(f' {end} ->', end='')

def backspace(n):
	for i in range(n):
		print('\b \b',end='')

# ------------------------------------------

system('cls')
print('\nFLOYD-WARSHALL ALGORITHM FOR \nALL PAIR SHORTEST PATH\n')

# W = np.array([
# 	[0,		1,		2,		3,		4],
# 	[1,		0,		3,		6,		15],
# 	[2,		np.Inf,	0,		-2,		np.Inf],
# 	[3,		np.Inf,	np.Inf,	0,		2],
# 	[4, 	1,		np.Inf,	np.Inf,	0]
# ])

# W = np.array([
# 	[0,		1,		2,		3,		4],
# 	[1,		0,		8,		np.Inf,	1],
# 	[2,		np.Inf,	0,		1,		np.Inf],
# 	[3,		4,		np.Inf,	0,		np.Inf],
# 	[4, 	np.Inf,	2,		9,		0]
# ])

z = np.Inf

W = np.array([
	[0,	1, 2, 3, 4, 5],
	[1,	0, 3, 8, z, -4],
	[2,	4, 0, z, 1, 7],
	[3,	z, 4, 0, z, z],
	[4,	2, z,-5, 0, z],
	[5,	z, z, z, 6, 0],
	])

n = len(W)
print('The graph given by \nAdjacency Matrix :-')
show(W, 'W')

# declare D[] and path[] matrices
D = np.zeros((n,n,n))
path = np.zeros((n,n,n))

# set rows and column indices
for k in range(n):
	for i in range(n):
		D[k][0][i] = D[k][i][0] = i
		path[k][0][i] = path[k][i][0] = i

floyd_warshall(W,D,path)

print('\n--------------------------------------------')
print('\nShortest paths for all possible pair of vertices\n')
for i in range(1,n):
	for j in range(1,n):
		if i != j:
			start = i
			end = j
			give_path(path, start, end)

# 'Π'