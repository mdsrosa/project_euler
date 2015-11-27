class Fixnum
  def divisible_by?(number)
    (self % number).zero?
  end
end

def sum_multiple_of_three_and_five(max=999)
  (1..max).reduce(0) do |mem, value|
    mem += value if value.divisible_by?(3) || value.divisible_by?(5)
    mem
  end
end

require './utils/ruby/benchmark'
ProjectEuller::RubyBenchmark.run { sum_multiple_of_three_and_five }