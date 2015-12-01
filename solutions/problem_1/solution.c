#include <stdio.h>
#include "utils.h"

#define LIST_SIZE 1000
#define N1 3
#define N2 5

int solution(){
  int list[LIST_SIZE], i, s;
  s = 0;
  for(i = 0; i < LIST_SIZE; i++){
    if(is_divisible_by(i, N1) == 1 || is_divisible_by(i, N2) == 1){
      list[i] = i;
      s += i;
    }
  }
  return s;
}

int main(int argc, char *argv[]){
  return int_time_it(solution);
}
