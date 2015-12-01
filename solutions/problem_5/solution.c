#include <stdio.h>
#include "utils.h"

#define LIST_SIZE 20

unsigned long solution(){
  int i, highest_number;
  unsigned long l[LIST_SIZE], *list, result;

  highest_number = 0;

  for(i = 0; i < LIST_SIZE; i++){
    l[i] = i+1;
  }

  list = l;

  result = reduce(mmc, list, LIST_SIZE);

  return result;
}


int main(int argc, char *argv[]){
  return unsigned_long_time_it(solution);
}
