require 'prime'

def the_10001_st_prime_number
  Prime.first(10001).last
end

require './utils/ruby/benchmark'
ProjectEuller::RubyBenchmark.run { the_10001_st_prime_number }