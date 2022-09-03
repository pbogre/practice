f = open("digits", "r")
digits = f.readlines()[0].strip()

adj = 13
max_prod = 0

for i in range(len(digits) - adj + 1):
	prod = 1
	for j in digits[i:i + adj]:
		prod *= int(j)
	if prod > max_prod:
		max_prod = prod

print(max_prod)
