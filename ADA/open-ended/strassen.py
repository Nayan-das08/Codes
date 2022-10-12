import numpy as np
from random import randint
import sys
import os

step_1 = 0
# step_2 = 0

def check(a,b):
	temp = np.subtract(a,b)
	flag = 1
	for i in temp:
		for j in i:
			if j != 0:
				print(f'error at [{i}],[{j}]')
				flag = 0
	if flag == 1:
		print('the solution is correct as \nchecked against traditional method')

def show(X, name=''):
	n = len(name)
	space = ' '*n

	if ((name == 'A' or name == 'B') and (len(X) <= 32) or (name == 'AxB') and (len(X) <= 16)):
		p = int(np.floor(np.log10(np.max(X))) + 1)
		for i in range(len(X)):
			if i == 0:
				print(f"{name} : ", end='')
			else:
				print(f"{space}   ", end='')
			print('[', end='')			
			for j in range(len(X)):
				print(f"{X[i][j]:{p}} ", end='')
			print('\b]')
	else:
		print(f'{name} : The size of the matrix ({len(X)}) is too large to be diplayed properly')
	print()

def partition(X, x, y):
	n = int(len(X)/2)
	a = x*n
	b = a+n
	c = y*n
	d = c+n

	temp = []

	for i in range(a,b):
		row = []
		for j in range(c,d):
			row.append(X[i][j])
		temp.append(row)

	# global step_1
	# step_1 += 1

	return np.array(temp)

def form(a,b,c,d):
	temp1 = np.concatenate([a,c])
	temp2 = np.concatenate([b,d])
	temp = np.concatenate([temp1,temp2],axis=1)
	return temp

def mult(A,B):

	A00 = partition(A,0,0)
	A01 = partition(A,0,1)
	A10 = partition(A,1,0)
	A11 = partition(A,1,1)

	B00 = partition(B,0,0)
	B01 = partition(B,0,1)
	B10 = partition(B,1,0)
	B11 = partition(B,1,1)

	global step_1
	# for partitioning
	step_1 += 1

	
	P=Q=R=S=T=U=V = np.ones(A.shape)

	if len(A) > 2:
		P = mult(add(A00,A11), 		add(B00,B11))
		Q = mult(add(A10,A11), 		B00)
		R = mult((A00), 			subtract(B01,B11))
		S = mult((A11), 			subtract(B10,B00))
		T = mult(add(A00,A01),		B11)
		U = mult(subtract(A10,A00), add(B00,B01))
		V = mult(subtract(A01,A11), add(B10,B11))
		step_1 += 10*len(A)/2

	elif len(A) == 2:
		P = add(A00,A11) 		*add(B00,B11)
		Q = add(A10,A11) 		*(B00)
		R = (A00) 				*subtract(B01,B11)
		S = (A11) 				*subtract(B10,B00)
		T = add(A00,A01)		*(B11)
		U = subtract(A10,A00) 	*add(B00,B01)
		V = subtract(A01,A11) 	*add(B10,B11)
		step_1 += 10*len(A)/2

	# global step_1

	C00 = add(subtract(add(P,S),T),V)
	C01 = add(R,T)
	C10 = add(Q,S)
	C11 = add(subtract(add(P,R),Q),U)
	if len(A) > 2:
		step_1 += 8*len(A)/2

	C = form(C00,C01,C10,C11)
	return C

def add(a,b):
	c = np.zeros((a.shape), dtype='int32')
	for i in range(len(a)):
		for j in range(len(b[i])):
			c[i][j] = a[i][j] + b[i][j]
			# global step_1
			# step_1 += 1
	return c

def subtract(a,b):
	c = np.zeros((a.shape), dtype='int32')
	for i in range(len(a)):
		for j in range(len(b[i])):
			c[i][j] = a[i][j] - b[i][j]
			# global step_1
			# step_1 += 1
	return c

# -------------------------------
# Variable definition
# A = np.array([
# [4,2,0,1],
# [3,1,2,5],
# [3,2,1,4],
# [5,2,6,7]])

# B = np.array([
# [2,1,3,2],
# [5,4,2,3],
# [1,4,0,2],
# [3,2,4,1]])

# A = np.array([[2,7],[9,4]])
# B = np.array([[8,9],[3,2]])

n = int(sys.argv[1])
dec = np.log(n)/np.log(2) - int(np.log(n)/np.log(2))
if dec != 0:
	print(f'\nsize of matrices ({n}) not in order of 2')
	exit()
else:
	A = np.ones([n,n], dtype='int32')
	B = np.ones([n,n], dtype='int32')

	for i in range(len(A)):
		for j in range(len(B)):
			A[i][j] = randint(0,50)
			B[i][j] = randint(0,50)

# -------------------------

os.system('cls')
print("\nSTRASSEN's METHOD OF \nMATRIX MULTIPLICATION\n")
show(A, 'A')
show(B, 'B')

C = mult(A,B)
show(C, 'AxB')
# print()
# print(C)
# print()
check(C,np.matmul(A,B))

D = np.ones([n,n], dtype='int32')
step_2 = 0

for i in range(len(A)):
	for j in range(len(A)):
		for k in range(len(A)):
			D[i][j] = D[i][j] + A[i][k] * B[k][j]
			step_2 += 1

# print(f'\n\nsteps for traditional method = {step_2}')
# print(f'\nsteps for Strassen\'s method = {step_1}')
# print(f'\n{len(A)**(np.log(7)/np.log(2)) :.2f}')
# import msvcrt
# msvcrt.getch()


# all partition = 1 step