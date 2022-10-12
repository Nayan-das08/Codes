import numpy as np

def show(x):
	print()
	for i in x:
		for j in i:
			if j == np.Inf:
				print(f"{j:4}", end=' ')
			else:
				print(f"{int(j):4}", end=' ')
		print()

def ret_set(V, n):
	V.pop(0)
	V.pop(0)
	print(V)
	temp = []

	if n == 1:
		for i in range(len(V)):
			pivot = V[i]
			for j in range(len(V)):
				if pivot != V[j]:
					temp.append((V[i],V[j]))
					# print((V[i],V[j]))

	if n == 2:
		pivot = V[0]
		for j in range(1,len(V)):
			a = V[j]
			# for k in range()

	# print(temp)
	return temp


W = np.array([
	[0, 1,2,3,4],
	[1, 0,2,9,np.Inf],
	[2, 1,0,6,4],
	[3, np.Inf,7,0,8],
	[4, 6,3,np.Inf,0]])

show(W)

# V = [int(i) for i in W[0]]
V = [i for i in range(6)]
# print(V)

n = len(V)-1

sets_1 = ret_set(V,1)
# sets_2 = ret_set(V,2)
print(sets_1)


