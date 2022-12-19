import matplotlib.pyplot as plt
import numpy as np
from sys import argv

# w = float(argv[1])
W = np.linspace(0.25,1.75,20)

def f(x, w):
	return w*x

def cost(x, y, w):
	# print('f(x)\ty\t(f(x)-y)**2')
	# for i in range(len(x)):
	# 	print(f'{f(x[i])} \t{y[i]} \t{(f(x[i])-y[i])**2}')
	error = (f(x,w)-y)**2
	return np.sum(error)/(2*len(x))


x = np.array([1,2,3])
y = np.array([1,2,3])

costs = []
for w in W:
	J = cost(x,y,w)
	costs.append(J)

plt.scatter(W,costs)
plt.xlabel('w')
plt.ylabel('J(w)')
# plt.grid(True)
# # plt.xlim(0,4)
# # plt.ylim(0,4)
plt.show()