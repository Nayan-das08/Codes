# fibonacci
import time
from sys import argv

memo = {0:0, 1:1}

def fibo(n):
	if n < 2:
		return n
	return fibo(n-1) + fibo(n-2)

def fibo2(n):
	if n not in memo:
		memo[n] = fibo2(n-1) + fibo2(n-2)
	return memo[n]

start = time.time()
for i in range(int(argv[1])):
	# print(f"{fibo2(i)}")
	fibo2(i)
print(f"time taken before = {time.time() - start}")

start = time.time()
for i in range(int(argv[1])):
	# print(f"{fibo2(i)}")
	fibo2(i)
print(f"time taken after = {time.time() - start}")
