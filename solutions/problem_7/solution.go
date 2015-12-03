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

func The10001StPrimeNumber() int {
  index := 1
  prime_index := 0
  var prime_number int

  for {
    index++
    if IsPrime(index){
      prime_index++
      prime_number = index
    }
    if prime_index == 10001 {
      return prime_number
    }
  }
}

func main() {
  start := time.Now()
  result := The10001StPrimeNumber()
  elapsed := time.Since(start)
  fmt.Printf("=> Result: %d\n", result)
  fmt.Printf("=> Time: %.8fs\n", elapsed.Seconds())
}
