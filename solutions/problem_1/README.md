If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

# Benchmarks

### Ruby
```
$ ruby problem_1/solution.rb
=> Result: 233168
=> Time: 0.000210s
```

### Python
```
$ python problem_1/solution.py
=> Result: 233168
=> Time: 0.000330s
```

### C
```
$ gcc -o p1 solutions/problem_1/solution.c utils/c/utils.c -I./utils/c
$ ./p1
=> Result: 233168
=> Time: 0.000010s
```

### Clojure
```
$ lein exec solution.clj
=> Result: 233168
=> Time: 0.002796032s
```

### Go
```
$ go run solutions/problem_1/solution.go
=> Result: 233168
=> Time: 0.00001836s
```


### Perl
```
$ perl solutions/problem_1/solution.pl
=> Result: 233168
=> Time: 0.000728s
```

### C++
```
$ g++ -o p1 solutions/problem_1/solution.cpp
$ ./p1
=> Result: 233168
=> Time: 0.000009s
```
