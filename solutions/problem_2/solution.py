import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.utils import timeit


@timeit
def solution_1():
    f1, f2, s, = 0, 1, 0,
    while f2 < 4000000:
        f2, f1 = f1, f1 + f2
        if f2 % 2 == 0:
            s += f2
    return s


@timeit
def solution_2():
    s, a, b = 0, 1, 1
    c = a + b
    while c < 4000000:
        s += c
        a = b + c
        b = a + c
        c = a + b
    return s

print "=> Solution 1"
solution_1()

print "=> Solution 2"
solution_2()
