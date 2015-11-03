import time
def sum_even_fibonacci_numbers_1():
    f1, f2, s, = 0, 1, 0,
    while f2 < 4000000:
        f2, f1 = f1, f1 + f2
        if f2 % 2 == 0:
            s += f2
    return s
def sum_even_fibonacci_numbers_2():
    s, a, b = 0, 1, 1
    c = a + b
    while c < 4000000:
        s += c
        a = b + c
        b = a + c
        c = a + b
    return s
t1 = time.time()
sum_even_fibonacci_numbers_1()
t2 = time.time()
print "=> sum_even_fibonacci_numbers_1(): %fs" % (t2 - t1)
t1 = time.time()
sum_even_fibonacci_numbers_2()
t2 = time.time()
print "=> sum_even_fibonacci_numbers_2(): %fs" % (t2 - t1)
