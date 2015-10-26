def largest_prime_factor(number, highest_number=0, printable=false)
  (2..number).each do |i|
    div, mod = number.divmod(i)
    if mod == 0
      largest_prime_factor(div, i, printable)
      break
    end
  end
  puts "Answer: #{highest_number}" if number == 1 && printable
end

require 'benchmark'
Benchmark.bm do |x|
  x.report { largest_prime_factor(600851475143) }
end
largest_prime_factor(600851475143, 0, true)