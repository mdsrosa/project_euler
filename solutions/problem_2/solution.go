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

func SumEvenFibonnaciNumbers2() (sum int) {
  sum = 0
  a := 1
  b := 1
  c := a + b
  for c < 4000000 {
    sum += c
    a = b + c
    b = a + c
    c = a + b
  }
  return
}

func main() {
  start := time.Now()
  result := SumEvenFibonnaciNumbers()
  elapsed := time.Since(start)
  fmt.Println("=> Solution 1")
  fmt.Printf("=> Result: %d\n", result)
  fmt.Printf("=> Time: %.8f\n", elapsed.Seconds())

  start2 := time.Now()
  result2 := SumEvenFibonnaciNumbers2()
  elapsed2 := time.Since(start2)
  fmt.Println("=> Solution 2")
  fmt.Printf("=> Result: %d\n", result2)
  fmt.Printf("=> Time: %.8f\n", elapsed2.Seconds())
}