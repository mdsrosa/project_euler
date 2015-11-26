require 'prime'
def smallest_positive_number_divisible_by_range(start_value=1, end_value=20)
  primes = {}
  (start_value..end_value).each do |value|
    value.prime_division.each{ |value| primes[value[0]] = value[1] if primes[value[0]].to_i < value[1] }
  end
  primes.reduce(1){ |mem, value| mem *= value[0] ** value[1] }
end

require './ruby/benchmark'
ProjectEuller::RubyBenchmark.run { smallest_positive_number_divisible_by_range }