import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.utils import timeit


@timeit
def solution():
    n = 1000
    for b in xrange(1, n):
        for c in xrange(1, n):
            a = n - b - c
            if (a**2) + (b**2) == (c**2):
                return a * b * c

solution()
