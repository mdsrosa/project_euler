package main

import (
  "fmt"
  "strconv"
  "time"
)

func Palindrome(str string) bool {
  for start, end := 0, len(str) - 1; start < end; start, end = start + 1, end - 1 {
    if str[start] != str[end] {
      return false
    }
  }
  return true
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