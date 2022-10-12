import numpy as np
from random import randint
import sys
import os

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

def show(X, name):
	n = len(name)
	space = ' '*n
	for i in range(len(X)):
		if i == 0:
			print(f"{name} : {X[i]}")
		else:
			print(f"{space}   {X[i]}")
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

	P=Q=R=S=T=U=V = np.ones(A.shape)
	
	if len(A) > 2:
		P = mult(np.add(A00,A11), 		np.add(B00,B11))
		Q = mult(np.add(A10,A11), 		B00)
		R = mult((A00), 				np.subtract(B01,B11))
		S = mult((A11), 				np.subtract(B10,B00))
		T = mult(np.add(A00,A01),		B11)
		U = mult(np.subtract(A10,A00), np.add(B00,B01))
		V = mult(np.subtract(A01,A11), np.add(B10,B11))

	elif len(A) == 2:
		P = np.add(A00,A11) 		*np.add(B00,B11)
		Q = np.add(A10,A11) 		*(B00)
		R = (A00) 					*np.subtract(B01,B11)
		S = (A11) 					*np.subtract(B10,B00)
		T = np.add(A00,A01)			*(B11)
		U = np.subtract(A10,A00) 	*np.add(B00,B01)
		V = np.subtract(A01,A11) 	*np.add(B10,B11)

	C00 = P+S-T+V
	C01 = R+T
	C10 = Q+S
	C11 = P+R-Q+U

	C = form(C00,C01,C10,C11)
	return C

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

n = int(sys.argv[1])
dec = np.log(n)/np.log(2) - int(np.log(n)/np.log(2))
if dec != 0:
	print(f'size of matrices ({n}) not in order of 2')
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
check(C,np.matmul(A,B))

import msvcrt
msvcrt.getch()