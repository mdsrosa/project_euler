# Solves => https://github.com/mdsrosa/project_euler/issues/1

def largest_prime_factor(number, highest_number)
  (2..n).each do |i|
    div, mod = n.divmod(i)
    if mod == 0
      largest_prime_factor(div, i)
      break
    end
  end
  puts highest_number if n == 1
end
