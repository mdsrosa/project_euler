defmodule Benchmark do
  def measure(function) do
    function
    |> :timer.tc
    |> elem(0)
    |> Kernel./(1_000_000)
    |> Float.to_string([decimals: 10, compact: true])
  end
end

defmodule ProblemOne do

  def calculate_sum(0, sum), do: sum

  def calculate_sum(number, sum) when rem(number, 3) == 0 do
    calculate_sum(number - 1, sum + number)
  end

  def calculate_sum(number, sum) when rem(number, 5) == 0 do
    calculate_sum(number - 1, sum + number)
  end

  def calculate_sum(number, sum), do: calculate_sum(number - 1, sum)

  def sum_multiple_of_three_and_five do
    IO.puts "=> Result: #{calculate_sum(999, 0)}"
    IO.puts "=> Time: #{Benchmark.measure(fn -> calculate_sum(999, 0) end)}"
  end

end

ProblemOne.sum_multiple_of_three_and_five