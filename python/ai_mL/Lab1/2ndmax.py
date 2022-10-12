n = 5
arr = []

for i in range (0,n):
	print(f"Enter a[{i}] : ", end = '')
	x = int(input())
	arr.append(x)

big_1 = arr[0]

for i in range (1,n):
	if (arr[i] > big_1):
		big_2 = big_1
		big_1 = arr[i]

print("\nSecond largest number is = ", big_2)