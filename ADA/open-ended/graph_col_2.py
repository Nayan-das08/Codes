from 	colorama 	import Fore, Style
from 	sys 		import argv
import 	networkx 	as nx
import 	matplotlib 	as mpl
import 	matplotlib.pyplot as plt
from 	os 			import system
import 	pandas 		as pd

solution = []
# color_set = [Fore.RED, Fore.GREEN, Fore.YELLOW, Fore.BLUE, Fore.MAGENTA, Fore.CYAN]

def print_status(status, space=''):
	print(f'{space}status: ')
	print(Fore.CYAN, end='')
	print(f'{space}  [', end='')
	for j in range(1,len(status)):
		print(f'{status[j]:2}, ', end='')
	print(']')
	print(Style.RESET_ALL, end='')

def color_em(nodes, W, n_colors):
	colors = list(range(n_colors))
	status = [0]
	[status.append(-1) for x in range(len(nodes))]
	algo(W, nodes, colors, status)

def algo(W, nodes, colors, status):
	status_copy = [i for i in status]
	if len(nodes) == 0:
		solution.append(status_copy)
		return
	else:
		nodes_copy = [i for i in nodes]
		current_node = nodes_copy.pop(0)

		row = W[current_node][1:]
		adj = [i+1 for i,x in enumerate(row) if x > 0]

		for c in colors:
			flag = 1
			for v in adj:
				if status_copy[v] == c:
					flag = 0
					break
			if flag == 1:
				status_copy[current_node] = c
				algo(W, nodes_copy, colors, status_copy)


# ----------------------------------

system('cls')
print('\nGRAPH COLORING PROBLEM \nUsing Backtracking')

W = []
n = int(input("\nNumber of nodes : "))

print('\nEnter the matrix : ')
for i in range(n+1):
	row_s = input('    ')
	row = [int(i) for i in row_s.split()]
	W.append(row)
print()

edges = []
nodes = W[0][1:]
n_colors = int(argv[1])
lst = []
flag = 0
chromatic = 0

color_set = list(range(n_colors))


# get edges
for i in range(1,len(W)):
	for j in range(i+1, len(W)):
		if (W[i][j] > 0):
			edges.append([i,j])

print(f"edges: {edges}\n")
print(f"nodes: {nodes}")

print()
for i in range(1,n_colors+1):
	# global solution
	solution = []
	color_em(nodes, W, i)
	lst.append(len(solution))
	
	if flag == 0:
		if len(solution) > 0:
			flag = 1
			chromatic = i

	print(f'  With {i} colors : ', end='')
	if len(solution) == 0:
		print(f'None')
	else:
		print(f'{len(solution)} solutions')

print(f'\nChromatic number of the graph : {chromatic}')


# display the graph
g = nx.Graph()

g.add_nodes_from(nodes)
g.add_edges_from(edges)

plt.figure()
plt.title(f'Resultant Colored Graph')
nx.draw(g, with_labels=True, node_color=pd.Series(solution[0][1:]), cmap=mpl.colormaps['Set1'], node_size=750)
plt.savefig(f'graph_pic.png')
plt.show()
plt.close()
