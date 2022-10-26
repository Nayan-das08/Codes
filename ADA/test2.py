# from os import system

# system('cls')
# print("hello")
# print('Neha')
# print(f'\033[{1};{2}H10')

# -----------------------------------

# import copy

# def show(a,b):
# 	print(f'a: {a}')
# 	print(f'b: {b}\n')

# a = [
# 	[1,2,3],
# 	[4,5,6]
# ]
# # b = [i for i in a]
# # b = a.copy()
# b = []
# for row in a:
# 	b.append([i for i in row])

# show(a,b)

# for i in range(len(a)):
# 	for j in range(len(a[0])):
# 		a[i][j] *= 2

# show(a,b)

# -----------------------------------

# a = []

# for i in range(3):
# 	row = []
# 	for j in range(2):
# 		row.append(0)
# 	a.append(row)

# print(a)

# -----------------------------------

n = int(input("number of nodes : "))

a = []

print('\nEnter the matrix : ')
for i in range(n+1):
	row_s = input()
	row = [int(i) for i in row_s.split()]
	a.append(row)

for i in a:
	print(i)
