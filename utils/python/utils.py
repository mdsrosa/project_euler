import time


def timeit(func):
    def inner(*args, **kwargs):
        t1 = time.time()
        output = func(*args, **kwargs)
        t2 = time.time()
        print "=> Result: %s" % output
        print "=> Time: %fs" % (t2 - t1)
        return func(*args, **kwargs)
    return inner

def is_prime(n):
    if n == 1:
        return False
    elif n < 4:
        return True
    elif n % 2 == 0:
        return False
    elif n < 9:
        return True
    elif n % 3 == 0:
        return False
    else:
        root = int(math.floor(math.sqrt(n)))
        f = 5
        while f <= root:
            if n % f == 0 or n % (f + 2) == 0:
                return False
            f += 6
        return True
