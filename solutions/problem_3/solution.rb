def largest_prime_factor(number=600851475143, highest_number=0)
  (2..number).each do |i|
    div, mod = number.divmod(i)
    if mod == 0
      largest_prime_factor(div, i)
      break
    end
  end
  puts "=> Result: #{highest_number}" if number == 1
end

require './utils/ruby/benchmark'
ProjectEuler::RubyBenchmark.run { largest_prime_factor }