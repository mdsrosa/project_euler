require 'prime'

def the_10001_st_prime_number
  Prime.first(10001).last
end

before = Time.now
result = the_10001_st_prime_number
elapsed = '%.6fs' % (Time.now - before).to_s

puts "=> Result: #{result}"
puts  "=> Time: #{elapsed}"