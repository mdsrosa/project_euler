#include <stdio.h>
#include <time.h>

clock_t begin, end;
double time_spent;

int main(int argc, char *argv[]){
  begin = clock();

  int s, a, b, c;
  s = 0;
  a = 1;
  b = 1;
  c = a + b;
  while(c < 4000000L){
    s += c;
    a = b + c;
    b = a + c;
    c = a + b;
  }

  end = clock();
  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("=> Result: %d\n", s);
  printf("=> Time: %fs\n", time_spent);
}
