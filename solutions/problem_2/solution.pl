use Time::HiRes qw( time );
sub solution {
  my ($sum, $a, $b) = (0, 1, 1);
  my $c = $a + $b;

  while($c < 4_000_000){
    $sum += $c;
    $a = $b + $c;
    $b = $a + $c;
    $c = $a + $b;
  }

  $sum;
}

my $start = time();
my $output = solution();
my $end = time();

print "=> Result: ", $output, "\n";
printf "=> Time: %fs\n", ($end - $start);