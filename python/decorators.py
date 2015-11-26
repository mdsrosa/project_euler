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
