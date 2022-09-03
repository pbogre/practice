import math as m

def prime_sieve(n):
	primes = [True for i in range(n)]
	primes[1] = False

	for i in range(2, m.ceil(m.sqrt(n))):
		if(primes[i]):
			for j in range(i*i, n, i):
				primes[j] = False

	sum = 0
	for i in range(n):
		if(primes[i]):
			sum += i
	return sum

max = 2000000
print(prime_sieve(max))
