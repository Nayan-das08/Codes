# queen

def algo(Q, tab=0):
	space = ' '*(tab*4)
	if len(Q) == 0:
		return
	else:
		for i in Q:
			Q_copy = [i for i in Q]
			Q_copy.remove(i)
			print(f'{space}{i}')
			algo(Q_copy, tab+1)

N = 4
Q = list(range(1,N+1))

# print(Q)
algo(Q)