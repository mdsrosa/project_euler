package main

import (
  "fmt"
  "math"
  "time"
)

func DivMod(a, b int64) (div, mod int64) {
  div = a / b
  mod = a % b
  return
}

func RecursiveLargestPrimeFactor(number, highest int64){
  for i := 2; int64(i) <= number; i++ {
    div, mod := DivMod(number, int64(i))
    if mod == 0 {
      RecursiveLargestPrimeFactor(div, int64(i))
      break
    }
  }
  if number == 1 {
    fmt.Println("=> Result", highest)
  }
}

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

func NonRecursiveLargestPrimeFactor(number int64) (highest int64) {
  highest = 0
  for i := 2; int64(i) < number; i++ {
    div, mod := DivMod(number, int64(i))
    if mod == 0 {
      if IsPrime(int(div)) && div > highest {
        highest = div
        break
      }
    }
  }
  return
}

func main() {
  start := time.Now()
  fmt.Println("=> Solution 1")
  RecursiveLargestPrimeFactor(600851475143, 0)
  elapsed := time.Since(start)
  fmt.Printf("=> Time: %.8fs\n", elapsed.Seconds())

  start2 := time.Now()
  result2 := NonRecursiveLargestPrimeFactor(600851475143)
  elapsed2 := time.Since(start2)
  fmt.Println("=> Solution 2")
  fmt.Printf("=> Result: %d\n", result2)
  fmt.Printf("=> Time: %.8fs\n", elapsed2.Seconds())
}