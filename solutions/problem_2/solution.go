package main

import (
  "fmt"
  "time"
)

func Fibonacci() func() int {
  a, b := 0, 1
  return func() int {
    a, b = b, a+b
    return a
  }
}

func SumEvenFibonnaciNumbers() (sum int) {
  f := Fibonacci()
  sum = 0
  for {
    fibNumber := f()
    if fibNumber > 4000000 {
      break
    }
    if fibNumber % 2 == 0 {
      sum += fibNumber
    }
  }
  return
}

func main() {
  start := time.Now()
  result := sumEvenFibonnaciNumbers()
  elapsed := time.Since(start)
  fmt.Printf("=> Result: %d\n", result)
  fmt.Printf("=> Time: %.8f\n", elapsed.Seconds())
}