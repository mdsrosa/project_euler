package main

import (
  "fmt"
  "strconv"
  "time"
)


func Reverse(s string) string {
  r := []rune(s)
  for i, j := 0, len(r)-1; i < len(r)/2; i, j = i+1, j-1 {
    r[i], r[j] = r[j], r[i]
  }
  return string(r)
}

func Palindrome(str string) bool {
  return str == Reverse(str)
}

func LargestPalindromeFromTheProductOfThreeDigitNumbers() int {
  max := 999
  min := 99
  highest_palindrome := 0

  for first_number := max; first_number > min; first_number-- {
    for second_number := max; second_number > min; second_number-- {
      result := first_number * second_number

      if result < highest_palindrome {
        continue
      }

      if Palindrome(strconv.Itoa(result)) {
        highest_palindrome = result
      }
    }
  }
  return highest_palindrome
}

func main() {
  start := time.Now()
  result := LargestPalindromeFromTheProductOfThreeDigitNumbers()
  elapsed := time.Since(start)
  fmt.Printf("=> Result: %d\n", result)
  fmt.Printf("=> Time: %.8f\n", elapsed.Seconds())
}