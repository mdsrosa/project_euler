def sum_of_the_squares(min=1, max=100)
  (min..max).reduce(0){ |mem, value| mem += value ** 2 }
end

def square_of_the_sums(min=1, max=100)
  (min..max).reduce(:+) ** 2
end

def diff_between_sum_of_the_square_and_square_of_the_sums
  (square_of_the_sums - sum_of_the_squares).abs
end

require 'benchmark'
Benchmark.bm do |x|
  x.report { diff_between_sum_of_the_square_and_square_of_the_sums }
end
puts "Answer: #{diff_between_sum_of_the_square_and_square_of_the_sums}"
