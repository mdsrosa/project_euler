SUM = 1000
def pythagorean_triplet
  (1..SUM).each do |c|
    (1..SUM).each do |b|
      a = SUM - b - c
      return (a * b * c) if (a**2) + (b**2) == (c**2)
    end
  end
end

require './utils/ruby/benchmark'
ProjectEuler::RubyBenchmark.run { pythagorean_triplet }