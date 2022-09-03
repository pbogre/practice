fib = [0,1]
sum = 0

while fib[0] + fib[1] < 4000000:
	f = fib[0] + fib[1]
	fib[0] = fib[1]
	fib[1] = f

	if(f % 2 == 0):
		sum += f

print(sum)
