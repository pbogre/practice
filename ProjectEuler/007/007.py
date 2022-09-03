import math

def is_prime(n):
	for i in range(2, n):
		if(n % i == 0): return False
	return True

p = 0
n = 0
i = 2
while n < 10001:
	if(is_prime(i)):
		p = i
		n+=1
	i+=1
print(p)
