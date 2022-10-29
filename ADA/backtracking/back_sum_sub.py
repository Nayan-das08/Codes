optimal = []

def algo(S, X, sum=0, tab=1, chosen=[]):
	space = ' '*(tab*4)
	if len(S) == 0:
		return
	else:	
		for v in S:
			sum += v
			chosen.append(v)

			branches = [i for i in S]
			branches.remove(v)
			
			# print(f"{space}{v} {branches} \t{space}->> {chosen} = {sum}")
			
			if sum > X:
				# print(f'{space}{v} exceeded w/ {sum}')
				sum -= v
				chosen.pop()
				continue
			if sum == X:
				chosen_copy = [i for i in chosen]
				optimal.append(chosen_copy)
				# print(f'{space}found sum at {chosen} \toptimal = {optimal}')
				sum -= v
				chosen.pop()
				continue

			algo(branches, X, sum, tab+1, chosen)
			sum -= v
			chosen.pop()

# --------------------------------------

print('SUBSET SUM PROBLEM\nUsing Backtracking\n')

S_str = input('Enter elements   : ')
S = [int(i) for i in S_str.split()]
X = int(input('Enter target sum : '))

algo(S, X)

# create a copy
opt_sort = [i for i in optimal]

# sort the elements of the copy
for i in opt_sort:
	i.sort()

# create a set of elements form the sorted list
# this will drop the duplicate solutions
opt_set = {tuple(i) for i in opt_sort}

print(f'\nOptimal Solutions ({len(opt_set)}) are :-')
if len(opt_set) == 0:
	print('  None')
else:
	for soln in opt_set:
		print(f'  {soln}')


# 43 25 99 77 55 63 87 92 17 9
# 343