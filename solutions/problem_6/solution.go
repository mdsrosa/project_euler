package main

import (
  "fmt"
  "math"
  "time"
)

const MAX = 100
const MIN = 1

func sumOfTheSquares() int {
  sum := float64((MAX + MIN) * (MAX - MIN + MIN) / 2)
  return int(math.Pow(sum, 2))
}

func squareOfTheSums() int {
  return (MAX * (MAX + MIN) * (2 * MAX + MIN))/6
}

func main() {
  start := time.Now()
  result := sumOfTheSquares() - squareOfTheSums()
  elapsed := time.Since(start)
  fmt.Printf("=> Result: %d\n", result)
  fmt.Printf("=> Time: %.8fs\n", elapsed.Seconds())
}