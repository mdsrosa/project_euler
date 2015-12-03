package main

import (
  "fmt"
  "time"
)

func divisibleBy(num, divisor int) bool {
  return num % divisor == 0
}

func SumMultipleOfThreeAndFive() (sum int) {
  sum = 0
  for i := 0; i < 1000; i++ {
    if divisibleBy(i, 3) || divisibleBy(i, 5) {
      sum += i
    }
  }
  return
}

func main() {
  start := time.Now()
  result := SumMultipleOfThreeAndFive()
  elapsed := time.Since(start)
  fmt.Printf("=> Result: %d\n", result)
  fmt.Printf("=> Time: %.8fs\n", elapsed.Seconds())
}