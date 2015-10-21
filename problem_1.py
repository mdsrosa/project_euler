"""
Problem 1:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
"""
def sum_multiples_of(n1, n2, x):
    def divisible_by(y, z): return y % z == 0
    n = set()
    for i in xrange(x):
        if divisible_by(i, n1) or divisible_by(i, n2): n.add(i)
    return sum(n)
print sum_multiples_of(3, 5, 1000)
