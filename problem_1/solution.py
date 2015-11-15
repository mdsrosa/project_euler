import time


def sum_multiples_of(n1, n2, x):
    def divisible_by(y, z):
        return y % z == 0
    n = set()
    for i in xrange(x):
        if divisible_by(i, n1) or divisible_by(i, n2):
            n.add(i)
    return sum(n)

t1 = time.time()
output = sum_multiples_of(3, 5, 1000)
t2 = time.time()

print "=> Result: %s" % output
print "=> Time: %fs" % (t2 - t1)
