The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.


# Benchmarks

### Python
```bash
$ python solutions/problem_10/solution.py
=> Solution 1
=> Result: 142913828922
=> Time: 6.019284s
=> Solution 2
=> Result: 142913828922
=> Time: 5.667188s
=> Solution 3
=> Result: 142913828922
=> Time: 0.881891s
```

### C
```bash
$ gcc -o p10 solutions/problem_10/solution.c utils/c/utils.c -I./utils/c
$ ./p10
=> Solution 1
=> Result: 142913828922
=> Time: 0.207738s
=> Solution 2
=> Result: 142913828922
=> Time: 0.199444s
```

### Ruby
```ruby
$ ruby solutions/problem_10/solution.rb
=> Result: 142913828922
=> Time: 0.313431s
```

### Go
```go
$ go run solutions/problem_10/solution.go
=> Solution 1
=> Result: 142913828922
=> Time: 1.86870906
=> Solution 2
=> Result: 142913828922
=> Time: 0.01212658
```