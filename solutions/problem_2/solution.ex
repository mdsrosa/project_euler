defmodule Benchmark do
  def measure(function) do
    function
    |> :timer.tc
    |> elem(0)
    |> Kernel./(1_000_000)
    |> Float.to_string([decimals: 10, compact: true])
  end
end

defmodule ProblemTwo do

  def sum_fibonacci(_, second, third, sum) when third < 4000000 do
    new_first = second + third
    new_second = new_first + third
    new_third = new_first + new_second

    sum_fibonacci(new_first, new_second, new_third, sum + third)
  end

  def sum_fibonacci(_, _, _, sum), do: sum

  def sum_even_fibonacci_numbers do
    IO.puts "=> Result: #{sum_fibonacci(1, 1, 2, 0)}"
    IO.puts "=> Time: #{Benchmark.measure(fn -> sum_fibonacci(1, 1, 2, 0) end)}"
  end
end

ProblemTwo.sum_even_fibonacci_numbers