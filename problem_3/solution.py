def largest_prime_factor(n, h):
    for i in xrange(2, n+1):
        d, m = divmod(n, i)
        if m == 0:
            largest_prime_factor(d, i)
            break
    if n == 1: print h
largest_prime_factor(600851475143, 0)
