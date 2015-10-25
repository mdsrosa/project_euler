def mdc(a, b):
    while b: a, b = b, a % b
    return a
mmc = lambda a, b: a * b / mdc(a, b)
print reduce(mmc, xrange(1,20))
