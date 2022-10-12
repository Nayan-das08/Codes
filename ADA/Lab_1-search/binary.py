# binary search

import time
from random import randint
import matplotlib.pyplot as plt

def RecBinarySearch(arr, low, high, target, count):
	count += 1
	m = (low + high)//2
	if (low > high):
		return -1, count
	else:
		if arr[m] == target:
			return m, count
		else:
			if target < arr[m]:
				return RecBinarySearch(arr, low, m-1, target, count)
			else:
				return RecBinarySearch(arr, m+1, high, target, count)

def create_arr(size):
	arr = [2*i for i in range(size)]
	return arr

#--------------------------------------

time_list = []
count_list = []
size_list = [i*1000 for i in range(1,500)]

total_start = time.time()
for i in size_list:

	size = i
	arr = create_arr(size)
	# print(f"array is : {arr}")

	# generate random target from array
	target = arr[randint(0,size-1)]

	start = time.time()
	p,count = RecBinarySearch(arr, 0, size-1, target, 0)
	elapsed = time.time() - start
	
	time_list.append(elapsed)
	count_list.append(count)

print(f"{(time.time() - total_start):.3f}sec")
plt.plot(size_list, count_list)
plt.ylim(0,30)
plt.show()


