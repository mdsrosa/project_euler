import time


def largest_prime_factor_1(n, h):
    for i in xrange(2, n+1):
        d, m = divmod(n, i)
        if m == 0:
            largest_prime_factor_1(d, i)
            break
    if n == 1:
        return h

t1 = time.time()
largest_prime_factor_1(600851475143, 0)
t2 = time.time()

print "=> largest_prime_factor_1(600851475143, 0): %fs" % (t2 - t1)


def largest_prime_factor_2(n):
    roots, product, x, y = [], 1, 2, n
    while product != n:
        while (y % x == 0):
            roots.append(x)
            y /= x
            product *= roots[-1]
        x += 1
    return max(roots)

t1 = time.time()
largest_prime_factor_2(600851475143)
t2 = time.time()

print "=> largest_prime_factor_2(600851475143): %fs" % (t2 - t1)
