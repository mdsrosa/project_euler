import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.utils import timeit, is_prime

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

print "=> Solution 1"
solution()
print "=> Solution 2"
solution2()
