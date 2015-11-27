#include <stdio.h>
#include <time.h>

#define LIST_SIZE 1000

clock_t begin, end;
double time_spent;

int divisible_by(int x, int y){
  return x % y == 0;
}

int sum_multiples_of(int n1, int n2){
  int list[LIST_SIZE], i, s;
  s = 0;
  for(i = 0; i < LIST_SIZE; i++){
    if(divisible_by(i, n1) == 1 || divisible_by(i, n2) == 1){
      list[i] = i;
      s += i;
    }
  }
  return s;
}

int main(int argc, char *argv[]){
  begin = clock();

  int result = sum_multiples_of(3, 5);

  end = clock();
  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("=> Result: %d\n", result);
  printf("=> Time: %fs\n", time_spent);
}
