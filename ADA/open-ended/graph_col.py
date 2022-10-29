from colorama import Fore, Back, Style
from sys import argv

solution = []
color_set = [Fore.RED, Fore.GREEN, Fore.YELLOW, Fore.BLUE, Fore.MAGENTA, Fore.CYAN]

def print_status(status, space=''):
	print(f'{space}status: ')
	print(Fore.CYAN, end='')
	print(f'{space}  [', end='')
	for j in range(1,len(status)):
		print(f'{status[j]:2}, ', end='')
	print(']')
	print(Style.RESET_ALL, end='')

def color_em(nodes, edges, W, n_colors):
	colors = list(range(n_colors))
	status = [0]
	[status.append(-1) for x in range(len(nodes))]
	print(f'\ncolors: {colors}')
	print_status(status)
	print('\n--------------------')
	algo(W, nodes, colors, status)

def algo(W, nodes, colors, status, tab=0):
	space = ' '*(tab*4)
	status_copy = [i for i in status]
	if len(nodes) == 0:
		solution.append(status_copy)
		print(f'{Fore.GREEN}------------------SOLUTION------------------{Style.RESET_ALL}')
		return
	else:
		nodes_copy = [i for i in nodes]
		current_node = nodes_copy.pop(0)
		branches = [(current_node,i) for i in colors]

		row = W[current_node][1:]
		adj = [i+1 for i,x in enumerate(row) if x > 0]

		for c in colors:
			print(f'\n{space}{Fore.YELLOW}({current_node},{c}){Style.RESET_ALL},    adj: {adj}')
			print_status(status, space)
			flag = 1
			for v in adj:
				print(f'{space}{v} (adj) has color {status[v]}')
				if status_copy[v] == c:
					flag = 0
					print(f"{Fore.RED}{space}won't work{Style.RESET_ALL}")
					break
			if flag == 1:
				status_copy[current_node] = c
				print(f"{Fore.GREEN}{space}selected{Style.RESET_ALL}")
				print_status(status_copy, space)
				algo(W, nodes_copy, colors, status_copy, tab+1)


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
n_colors = int(argv[1])

if n_colors > 6:
	# print("can't process more than 6 colors (b'coz of colorama)")
	color_set = list(range(n_colors))
	# exit()


# get edges
for i in range(1,len(W)):
	for j in range(i+1, len(W)):
		if (W[i][j] > 0):
			edges.append([i,j])

print(f"edges: {edges}")
print(f"nodes: {nodes}")

color_em(nodes, edges, W, n_colors)

# show optimal solutions
print(f'\nOptimal Solutions ({len(solution)}) with {n_colors} colors are :-')
if len(solution) == 0:
	print('  None')
elif len(solution) <= 6:
	for i,soln in enumerate(solution):
		# print(f'  {soln[1][1:]}')
		# print(f'  {soln[1:]}')
		print('  [ ', end='')
		for node,col in enumerate(soln[1:]):
			if col == 0:
				print(f'{color_set[col]}{node+1} ', end='')
			elif col == 1:
				print(f'{color_set[col]}{node+1} ', end='')
			else:
				print(f'{color_set[col]}{node+1} ', end='')
		print(f'{Style.RESET_ALL}]',)
else:
	print('    solution set too large to display')

# [0, 1, 2, 0]
# [0, 2, 1, 0]
# [1, 0, 2, 1]
# [1, 2, 0, 1]
# [2, 0, 1, 2]
# [2, 1, 0, 2]