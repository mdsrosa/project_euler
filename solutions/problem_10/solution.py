import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.utils import timeit, is_prime

@timeit
def solution():
    LIMIT = 2000000
    total_sum = 0
    for n in xrange(2, LIMIT):
        if is_prime(n):
            total_sum += n
    return total_sum

solution()
