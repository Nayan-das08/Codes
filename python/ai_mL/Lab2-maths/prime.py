# function definition
def findPrime(n):
	prime = 1
	if (n == 1 or n == 0):
		print(f"{n} is neither prime nor composite")
	else:
		for i in range(2,n):
			if (n%i == 0):	# if divisible by anything -> not prime
				prime = 0	# not prime
		if (prime == 1):
			print(f"The number {n} is a prime")	
		else:
			print(f"The number {n} is composite")

n = int(input("Enter a number : "))
findPrime(n)
