package main

import(
  "fmt"
  "time"
)

func Gcd(number_1, number_2 int) int {
  for number_2 != 0 {
    number_1, number_2 = number_2, number_1 % number_2
  }
  return number_1
}

func Lcm(number_1, number_2 int) int {
  return (number_1 * number_2) / Gcd(number_1, number_2)
}

func DivisibleBy(first, last int) int {
  lcm_for_all := Lcm(first, first + 1)

  for i:= first + 2; i <= last; i++ {
    lcm_for_all = Lcm(lcm_for_all, i)
  }

  return lcm_for_all
}

func main() {
  start := time.Now()
  result := DivisibleBy(1, 20)
  elapsed := time.Since(start)
  fmt.Printf("=> Result: %d\n", result)
  fmt.Printf("=> Time: %.8f\n", elapsed.Seconds())
}