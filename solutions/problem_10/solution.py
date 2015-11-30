import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.utils import timeit, is_prime

import math

LIMIT = 2000000

@timeit
def solution():
    total_sum = 0
    for n in xrange(2, LIMIT):
        if is_prime(n):
            total_sum += n
    return total_sum

@timeit
def solution2():
    total = 5
    counter = 5
    while counter <= LIMIT:
        if is_prime(counter):
            total += counter
        counter += 2
        if counter <= LIMIT and is_prime(counter):
            total += counter
        counter += 4

    return total

@timeit
def solution3():
    """
    The sieve of Eratosthenes algorithm
    """

    cross_limit = int(math.floor(math.sqrt(LIMIT)))
    sieve = {key: False for key in xrange(2, LIMIT)}

    # Eratosthenes's algorithm kicks in

    for x in xrange(4, LIMIT, 2):
        sieve[x] = True

    for p in xrange(3, cross_limit, 2):
        if sieve[p] is False:
            m = p*p
            for y in xrange(m, LIMIT, 2*p):
                sieve[y] = True

    total = 0

    for n in xrange(2, LIMIT-1):
        if sieve[n] is False:
            total += n

    return total


print "=> Solution 1"
solution()

print "=> Solution 2"
solution2()

print "=> Solution 3"
solution3()
