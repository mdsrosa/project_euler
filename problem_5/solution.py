import time


def mdc(a, b):
    while b:
        a, b = b, a % b
    return a
mmc = lambda a, b: a * b / mdc(a, b)

t1 = time.time()
output = reduce(mmc, xrange(2, 20))
t2 = time.time()

print "=> Result: %s" % output
print "=> Time: %fs" % (t2 - t1)
