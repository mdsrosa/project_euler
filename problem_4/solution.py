import time
def is_palindrome_number(n): return n == n[::-1]

def largest_palindrome_from_the_product_of_three_digit_numbers():
    largest_number = 0
    for x in xrange(100, 999):
        for y in xrange(100, 999):
            v = x * y
            if v > largest_number:
                if is_palindrome_number(str(v)):
                    largest_number = v
    return largest_number

t1 = time.time()
largest_palindrome_from_the_product_of_three_digit_numbers()
t2 = time.time()
print "largest_palindrome_from_the_product_of_three_digit_numbers: %fs" % (t2 - t1)
print "Answer: {0}".format(largest_palindrome_from_the_product_of_three_digit_numbers())
