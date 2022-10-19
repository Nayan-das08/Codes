import copy

def algo(S, sum=0):
	if len(S) == 1:
		return
	for v in S:
		sum += v
		branches = [i for i in S]
		branches.remove(v)
		print(f"{branches}, {sum}")
		algo(branches, sum)
	print()

# ---------------------------------------------

S = [3,4,5,6]
X = 10

# traversal starts here
# Sum = 0
# for v in S:
# 	Sum += v
# 	branches = [i for i in S]
# 	branches.remove(v)
# 	print(branches, Sum)

print(S, '\n')
algo(S)