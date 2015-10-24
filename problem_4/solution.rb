def palindrome?(number)
  number.to_s == number.to_s.reverse
end

def largest_palindrome_from_the_product_of_three_digit_numbers
  range = 999..100
  highest_palindrome = 0

  (range.first).downto(range.last) do |first_number|
    (range.first).downto(range.last) do |second_number|
      result = first_number * second_number

      next if result < highest_palindrome
      highest_palindrome = result if palindrome?(result)

    end
  end
  highest_palindrome
end