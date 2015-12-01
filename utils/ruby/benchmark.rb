module ProjectEuler
  class RubyBenchmark

    def self.run(&block)
      before = Time.now
      result = block.call
      elapsed = '%.6fs' % (Time.now - before).to_s

      puts "=> Result: #{result}"
      puts  "=> Time: #{elapsed}"
    end

  end
end