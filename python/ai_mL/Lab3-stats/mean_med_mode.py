#import statistics as stat
from statistics import mode

def Mean(arr):
	sum = 0
	for i in range (0,len(arr)):
		sum = sum + arr[i]	# adding all the elements
	mean = sum/len(arr)
	return mean

def Median(arr):
	arr = sorted(arr)
	n = len(arr)
	if (n%2 == 0):	# even number of elements
		median = (arr[int(n/2)]+arr[int(n/2)-1])/2
	else:			# odd number of elements
		median = arr[int(n/2)]
	return median

#-----------------------------------------------

n = int(input("Enter number of elements : "))

arr = []
#sum = 0

# Enter the values
for i in range (0,n):
	print(f"Enter a[{i}] : ", end = '')
	x = int(input())
	arr.append(x)

mean = Mean(arr)
median = Median(arr)
mode = mode(arr)

print("mean   = ", mean)
print("median = ", median)
print("mode   = ", mode)
