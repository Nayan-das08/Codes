import networkx as nx
import matplotlib.pyplot as plt

W = [
	[0,1,2,3,4],
	[1,0,1,1,0],
	[2,1,0,1,1],
	[3,1,1,0,1],
	[4,0,1,1,0]
]
edges = []
vertices = W[0][1:]

# get edges
for i in range(1,len(W)):
	for j in range(i+1, len(W)):
		if (W[i][j] > 0):
			edges.append([i,j])

# show edges
# for edge in edges:
# 	print(f'[{edge[0]},{edge[1]}]')

# display the graph
# graph = nx.Graph()
# graph.add_edges_from(edges)
# print(f'nodes : {graph.nodes()}')
# print(f'edges : {graph.edges()}')
# nx.draw_networkx(graph)
# plt.show()

