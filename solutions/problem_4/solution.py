import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.utils import timeit


def is_palindrome_number(n):
    return n == n[::-1]


@timeit
def solution():
    largest_number = 0
    for x in xrange(100, 999):
        for y in xrange(100, 999):
            v = x * y
            if v > largest_number:
                if is_palindrome_number(str(v)):
                    largest_number = v
    return largest_number


solution()
