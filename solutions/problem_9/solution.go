package main

import (
  "fmt"
  "math"
  "time"
)

func PythagoreanTriplet() int {
  SUM := 1000
  for c := 1; c <= SUM; c++ {
    for b := 1; b <= SUM; b++ {
      a := SUM - b - c
      if (math.Pow(float64(a), 2) + math.Pow(float64(b), 2) == math.Pow(float64(c), 2)) {
        return a * b * c
      }
    }
  }
  return 0
}

func main(){
  start := time.Now()
  result := PythagoreanTriplet()
  elapsed := time.Since(start)
  fmt.Printf("=> Result: %d\n", result)
  fmt.Printf("=> Time: %.8f\n", elapsed.Seconds())
}