import sys
import os
sys.path.append(os.path.abspath(os.path.dirname('./utils/python')))
from python.decorators import timeit

import math


@timeit
def diff_between_sum_of_the_naturals_squared_and_square_of_the_sum():
    sum_of_naturals_squared = 0
    square_of_the_sum = ((100 * (100 + 1)) / 2) ** 2
    for x in xrange(1, 101):
        sum_of_naturals_squared += (x ** 2)
    return math.fabs(sum_of_naturals_squared - square_of_the_sum)


diff_between_sum_of_the_naturals_squared_and_square_of_the_sum()
