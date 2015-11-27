import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.decorators import timeit


@timeit
def get_result():
    def mdc(a, b):
        while b:
            a, b = b, a % b
        return a
    mmc = lambda a, b: a * b / mdc(a, b)
    return reduce(mmc, xrange(2, 20))

get_result()
