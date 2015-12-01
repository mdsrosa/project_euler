require 'prime'

def primes_sum_under_two_million
  Prime.reduce(0) do |sum, prime|
    return sum if prime > 2_000_000
    sum += prime
  end
end

require './utils/ruby/benchmark'
ProjectEuler::RubyBenchmark.run { primes_sum_under_two_million }
