import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.decorators import timeit

result = None


@timeit
def solution_1(n, h):
    global result
    for i in xrange(2, n + 1):
        d, m = divmod(n, i)
        if m == 0:
            solution_1(d, i)
            break
    if n == 1:
        result = h


@timeit
def solution_2(n):
    roots, product, x, y = [], 1, 2, n
    while product != n:
        while (y % x == 0):
            roots.append(x)
            y /= x
            product *= roots[-1]
        x += 1
    return max(roots)

print "=> Solution 1"
solution_1(600851475143, 0)

print "=> Solution 2"
solution_2(600851475143)
