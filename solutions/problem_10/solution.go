package main

import (
  "fmt"
  "math"
  "time"
)

func IsPrime(number int) bool {
  if number == 2 {
    return true
  }

  square_root := int(math.Floor(math.Sqrt(float64(number))))
  for i := 2; i <= square_root; i++ {
    if number % i == 0 {
      return false
    }
  }
  return true
}

func SieveOfEratosthenes(N int) (primes []int) {
    b := make([]bool, N)
    for i := 2; i < N; i++ {
        if b[i] == true { continue }
        primes = append(primes, i)
        for k := i * i; k < N; k += i {
            b[k] = true
        }
    }
    return
}

func SumFirstTwoMillionPrimeNumbers() (sum int) {
  sum = 0
  for num := 2; num < 2000000; num++ {
    if IsPrime(num) {
      sum += num
    }
  }
  return
}

func SumFirstTwoMillionPrimeNumbers2() (sum int) {
  sum = 0
  for _, p := range SieveOfEratosthenes(2000000) {
    sum += p
  }
  return
}

func main() {
  start := time.Now()
  result := SumFirstTwoMillionPrimeNumbers()
  elapsed := time.Since(start)
  fmt.Println("=> Solution 1")
  fmt.Printf("=> Result: %d\n", result)
  fmt.Printf("=> Time: %.8f\n", elapsed.Seconds())

  start2 := time.Now()
  result2 := SumFirstTwoMillionPrimeNumbers2()
  elapsed2 := time.Since(start2)
  fmt.Println("=> Solution 2")
  fmt.Printf("=> Result: %d\n", result2)
  fmt.Printf("=> Time: %.8f\n", elapsed2.Seconds())
}
