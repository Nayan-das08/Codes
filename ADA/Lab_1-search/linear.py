# linear search python

import time
from random import randint
import matplotlib.pyplot as plt
import sys
sys.setrecursionlimit(10000000)

def RecLinearSearch(arr, target, n, count):
	count += 1
	if len(arr) == 0:
		return -1, count
	elif arr[0] ==target:
		return n, count;
	else:
		temp = arr[1:]
		return RecLinearSearch(temp, target, n+1, count)
		
def create_arr(size):
	arr = [2*i for i in range(size)]
	return arr

#--------------------------------------

time_list = []
count_list = []
size_list = [i*100 for i in range(1,50)]

total_start = time.time()
for i in size_list:
	# set size of array
	size = i

	# create an array
	arr = create_arr(size)
	# print(f"array is : {arr}")

	# generate random target from array
	target = arr[randint(0,size-1)]


	start = time.time()
	p,count = RecLinearSearch(arr, target, 0, 0)
	elapsed = time.time() - start

	time_list.append(elapsed)
	count_list.append(count)

print(f"{(time.time() - total_start):.3f}sec")
plt.plot(size_list, count_list)
plt.show()