#include <stdio.h>
#include <time.h>

clock_t begin, end;
double time_spent;

unsigned long result;

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
    result = highest_number;
  }
}

int main(int argc, char *argv[]){
  begin = clock();

  largest_prime_factor(600851475143L, 0L);

  end = clock();
  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("=> Result: %ld\n", result);
  printf("=> Time: %fs\n", time_spent);
}
