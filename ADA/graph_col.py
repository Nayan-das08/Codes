# done till 1,0 -> 2,1 -> 3,2 -> 4,0
# need to save the progress (ie. the color chosen)
# also need to manage the variable status
	# the arg needs to be sent to next recursion as a copy
	# the value isn't changing
	# same problem as nodes variable

def print_status(status, space=''):
	print(f'{space}status: ')
	for i in range(len(status)):
		print(f'{space}  [', end='')
		for j in range(1,len(status[1])):
			print(f'{status[i][j]:2}, ', end='')
		print(']')

def color_em(nodes, edges, W, n_colors):
	colors = list(range(n_colors))
	status = [[0], [0]]
	[status[0].append(x) for x in nodes]
	[status[1].append(-1) for x in range(len(nodes))]
	print(f'\ncolors: {colors}')
	print_status(status)
	print('\n--------------------')
	algo(W, nodes, colors, status)

def algo(W, nodes, colors, status, tab=0):
	space = ' '*(tab*4)
	if len(nodes) == 0:
		return
	else:
		# print()
		nodes_copy = [i for i in nodes]
		current_node = nodes_copy.pop(0)
		branches = [(current_node,i) for i in colors]

		row = W[current_node][1:]
		adj = [i+1 for i,x in enumerate(row) if x > 0]

		for c in colors:
			print(f'\n{space}({current_node},{c}),    adj: {adj}')
			print_status(status, space)
			flag = 1
			for v in adj:
				print(f'{space}{v} (adj) has color {status[1][v]}')
				if status[1][v] == c:
					flag = 0
					print(f"{space}won't work")
					break
			if flag == 1:
				status[1][current_node] = c
				algo(W, nodes_copy, colors, status, tab+1)


# ----------------------------------

W = [
	[0,1,2,3,4],
	[1,0,1,1,0],
	[2,1,0,1,1],
	[3,1,1,0,1],
	[4,0,1,1,0]
]
edges = []
nodes = W[0][1:]

# get edges
for i in range(1,len(W)):
	for j in range(i+1, len(W)):
		if (W[i][j] > 0):
			edges.append([i,j])

print(f"edges: {edges}")
print(f"nodes: {nodes}")

color_em(nodes, edges, W, n_colors=3)