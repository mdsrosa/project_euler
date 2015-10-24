def is_palindrome_number(n): return n == n[::-1]
largest_number = 0
for x in xrange(100, 999):
    for y in xrange(100, 999):
        v = x * y
        if v > largest_number:
            if is_palindrome_number(str(v)):
                largest_number = v
print largest_number
