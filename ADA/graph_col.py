import networkx as nx
import matplotlib.pyplot as plt

def color_em(nodes, edges, W, n_colors):
	colors = list(range(n_colors))
	status = [[0], [0]]
	[status[0].append(x) for x in nodes]
	[status[1].append(-1) for x in range(len(nodes))]
	print(f'\ncolors: {colors}')
	print(f'status: \n    {status[0]}\n    {status[1]}')
	print('\n--------------------')
	algo(W, nodes, colors, status)

def algo(W, nodes, colors, status, tab=0):
	space = ' '*(tab*4)
	if len(nodes) == 0:
		return
	else:
		print()
		nodes_copy = [i for i in nodes]
		current_node = nodes_copy.pop(0)
		branches = [(current_node,i) for i in colors]

		row = W[current_node][1:]
		adj = [i+1 for i,x in enumerate(row) if x > 0]

		print(f'{space}{current_node} -> {branches}')
		print(f'{space}adjacent to {current_node} = {adj}')

		for v in adj:
			adj_color = status[1][v]
			print(f'{space}{v} has color {adj_color}')
			# print(f'{space}remaining nodes: {nodes}')
			if adj_color == -1:
				algo(W, nodes_copy, colors, status, tab+1)


	# print(nodes)


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