import math

def is_triplet(a, b, c):
	if(a <= b and b <= c):
		return False
	pyth = math.sqrt(a**2 + b**2)
	return c == pyth

for a in range(1,1000):
	for b in range(1,1000):
		for c in range(1,1000):
			if(a + b + c == 1000 and is_triplet(a, b, c)):
				print(a*b*c)
				break;
