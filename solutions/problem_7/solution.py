import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.utils import timeit, is_prime

LIMIT = 10001

@timeit
def solution():
    number = 1
    counter = 2  # two is prime
    while (counter <= LIMIT):
        number += 2
        if is_prime(number):
            counter += 1
    return number


solution()
