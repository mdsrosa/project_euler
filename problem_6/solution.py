import time
import math


def diff_between_sum_of_the_naturals_squared_and_square_of_the_sum():
    sum_of_naturals_squared = 0
    square_of_the_sum = ((100*(100+1)) / 2)**2
    for x in xrange(1, 101):
        sum_of_naturals_squared += (x**2)
    return math.fabs(sum_of_naturals_squared - square_of_the_sum)

t1 = time.time()
output = diff_between_sum_of_the_naturals_squared_and_square_of_the_sum()
t2 = time.time()

print "=> Result: %d" % output
print "=> Time: %fs" % (t2 - t1)
