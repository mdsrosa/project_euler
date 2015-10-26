f1, f2, s, n = 0, 1, 0, 4000000
while f2 < n:
    f2, f1 = f1, f1 + f2
    if f2 % 2 == 0:
        s += f2
print s
