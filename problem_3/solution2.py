roots = []; product = 1; x = 2; n = 600851475143; y = n;
while product != n:
	while (y % x == 0):
		roots.append(x)
		y /= x
		product *= roots[-1]
	x += 1
print max(roots)
