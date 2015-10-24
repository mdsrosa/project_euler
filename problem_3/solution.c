#include <stdio.h>

void largest_prime_factor(unsigned long n, unsigned long highest_number){
  unsigned long d, i;
  for(i = 2; i <= n; i++){
    d = n / i;
    if(n % i == 0){
      largest_prime_factor(d, i);
      break;
    }
  }
  if(d == 0L){
    printf("%ld\n", highest_number);
  }
}

int main(int argc, char *argv[]){
  unsigned long n = 600851475143L;
  largest_prime_factor(n, 0L);
}
