require 'prime'

def the_10001_st_prime_number
  Prime.first(10001).last
end

require 'benchmark'
Benchmark.bm do |x|
  x.report { the_10001_st_prime_number }
end
puts "Answer: #{the_10001_st_prime_number}"
