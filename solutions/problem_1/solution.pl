use Time::HiRes qw( time );

sub divisible_by {
  my ($y, $z) = @_;
  $y % $z == 0
}

sub solution {
  my ($n1, $n2, $limit) = @_;
  my @numbers;

  for $n (1..$limit-1) {
    if(divisible_by($n, $n1) || divisible_by($n, $n2)){
      push @numbers, $n;
    }
  }

  my $total = 0;
  $total += $_ for @numbers;

  $total;
}

my $start = time();
my $output = solution(3, 5, 1000);
my $end = time();

print "=> Result: ", $output, "\n";
printf "=> Time: %fs\n", ($end - $start);