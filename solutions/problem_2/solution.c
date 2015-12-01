#include <stdio.h>
#include "utils.h"

#define LIMIT 4000000L

int solution(){
  int s, a, b, c;
  s = 0;
  a = 1;
  b = 1;
  c = a + b;

  while(c < LIMIT){
    s += c;
    a = b + c;
    b = a + c;
    c = a + b;
  }

  return s;
}

int main(int argc, char *argv[]){
  return int_time_it(solution);
}
