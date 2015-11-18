import time
import math

LIMIT = 10001


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
        result = math.floor(math.sqrt(n))
        f = 5
        while f <= result:
            if n % f == 0:
                return False
            if n % (f + 2) == 0:
                return False
            f += 6
        return True


def find_10001st_prime():
    number = 1
    counter = 2  # two is prime
    while (counter <= LIMIT):
        number += 2
        if is_prime(number):
            counter += 1
    return number

t1 = time.time()
result = find_10001st_prime()
t2 = time.time()

print "=> Result: %d" % result
print "=> Time: %fs" % (t2 - t1)
