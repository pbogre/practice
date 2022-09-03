def is_divisible(n):
	for i in range(2,20):
		if(n % i != 0): return False
	return True

i = 1
found = False
while not found:
	i+=1
	found = is_divisible(i)
print(i)
