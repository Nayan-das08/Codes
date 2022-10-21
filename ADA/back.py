import copy

def check(sum, X):
	if sum >= X: # sum exceeds X
		return 0
	else:
		return 1

def algo_all(S, sum, tab, X):
	space = ' '*(tab*4)
	if len(S) == 0:
		return
	else:	
		for v in S:
			sum += v
			# add_node(sum, v, X)
			branches = [i for i in S]
			branches.remove(v)
			# print(space, v, branches, sum)
			print(f"{space}{v} {branches} \t-> {sum}")
			algo_all(branches, sum, tab+1, X)
			sum -= v
		# print()

def algo_exceed(S, sum, tab, X):
	space = ' '*(tab*4)
	if len(S) == 0:
		return
	else:	
		for v in S:
			# add_node(sum, v, X)
			sum += v
			branches = [i for i in S]
			branches.remove(v)
			# print(space, v, branches, sum)
			print(f"{space}{v} {branches} \t-> sum={sum}", end='')
			if sum > X:
				print('  exceeded')
			else:
				print()
			algo_exceed(branches, sum, tab+1, X)
			sum -= v
		# print()

def algo_not_exceed(S, sum, tab, X):
	space = ' '*(tab*4)
	if len(S) == 0:
		return
	else:	
		for v in S:
			sum += v
			if sum > X:
				# print('  exceeded')
				return
			branches = [i for i in S]
			branches.remove(v)
			# print(space, v, branches, sum)
			print(f"{space}{v} {branches} \t-> sum={sum}")
			algo_not_exceed(branches, sum, tab+1, X)
			sum -= v
		# print()

def algo(S, sum, tab, X, chosen):
	space = ' '*(tab*4)
	if len(S) == 0:
		return
	else:	
		for v in S:
			sum += v
			if sum > X:
				# print('  exceeded')
				return
			branches = [i for i in S]
			branches.remove(v)
			# print(space, v, branches, sum)
			print(f"{space}{v} {branches} \t-> sum={sum}")
			algo(branches, sum, tab+1, X)
			sum -= v
		# print()

S = [3,4,5,6]
X = 9
print(f"{0} {S}   \t-> {0}")
# algo_all(S, 0, 1, X)
# algo_exceed(S, 0, 1, X)
# algo_not_exceed(S, 0, 1, X)
algo(S, 0, 1, X)