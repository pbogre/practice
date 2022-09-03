import math

def smallest_factor(n):
	if(n <= 1): raise Exception("1")
	for i in range(2, math.ceil(math.sqrt(n))):
		if(n % i == 0): return i;
	return n;

n = 600851475143
p = smallest_factor(n);
while p < n :
	n /= p;
	p = smallest_factor(n);
print(n);
