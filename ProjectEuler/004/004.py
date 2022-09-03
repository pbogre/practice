import math

def is_palindrome(n):
	d = math.floor(math.log10(n)) + 1

	s = str(n);
	for i in range(math.floor(d/2)):
		if(s[i] != s[d-1-i]): return False
	return True

p = 0
for i in range(100, 1000):
	for j in range(100, 1000):
		n = i * j
		if(n > p and is_palindrome(n)): p = n
print(p)
