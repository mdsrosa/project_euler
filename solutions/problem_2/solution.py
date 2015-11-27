import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./')))
from python.decorators import timeit


@timeit
def sum_even_fibonacci_numbers_1():
    f1, f2, s, = 0, 1, 0,
    while f2 < 4000000:
        f2, f1 = f1, f1 + f2
        if f2 % 2 == 0:
            s += f2
    return s


@timeit
def sum_even_fibonacci_numbers_2():
    s, a, b = 0, 1, 1
    c = a + b
    while c < 4000000:
        s += c
        a = b + c
        b = a + c
        c = a + b
    return s

print "=> Solution 1"
sum_even_fibonacci_numbers_1()

print "=> Solution 2"
sum_even_fibonacci_numbers_2()
