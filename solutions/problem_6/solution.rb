MAX = 100
MIN = 1

# SOLUTION 1
def sum_of_the_squares(min=MIN, max=MAX)
  (min..max).reduce(0){ |mem, value| mem += value ** 2 }
end

def square_of_the_sums(min=MIN, max=MAX)
  (min..max).reduce(:+) ** 2
end

def diff_between_sum_of_the_square_and_square_of_the_sums_1
  (square_of_the_sums - sum_of_the_squares).abs
end

require './utils/ruby/benchmark'
puts "=> Solution 1"
ProjectEuler::RubyBenchmark.run { diff_between_sum_of_the_square_and_square_of_the_sums_1 }

puts "=============================="

# SOLUTION 2
def sum_of_the_squares_using_difference(min=MIN, max=MAX)
  range = max - min + 1
  (range * (range + 1) * (2 * range + 1))/6
end

def square_of_the_sums_gauss(min=MIN, max=MAX)
  ((max + min) * (max - min + 1) / 2) ** 2
end

def diff_between_sum_of_the_square_and_square_of_the_sums_2
  (square_of_the_sums_gauss - sum_of_the_squares_using_difference).abs
end

require './utils/ruby/benchmark'
puts "=> Solution 2"
ProjectEuler::RubyBenchmark.run { diff_between_sum_of_the_square_and_square_of_the_sums_2 }