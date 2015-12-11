use Time::HiRes qw( time );

my $result = 0;

sub divmod {
	my ($x, $y) = @_;
	($x / $y, $x % $y);
}

sub solution {
	my ($n, $h) = @_;

	for $i (2..($n + 1)){
		my ($div, $mod) = divmod($n, $i);
		if($mod eq 0){
			solution($div, $i);
			last;
		}
	}

	if($n eq 1){
		$result = $h;
	}
}

my $start = time();
solution(600851475143, 0);
my $end = time();

print "=> Result: ", $result, "\n";
printf "=> Time: %fs\n", ($end - $start);