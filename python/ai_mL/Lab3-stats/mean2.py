import numpy

n = int(input("Enter number of elements : "))

arr = []
sum = 0

# Enter the values
for i in range (0,n):
	print(f"Enter a[{i}] : ", end = '')
	x = int(input())
	arr.append(x)

mean = numpy.mean(arr)
median = numpy.median(arr)

