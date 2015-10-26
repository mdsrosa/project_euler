#include <stdio.h>

int main(int argc, char *argv[]){
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
  printf("%d\n", s);
}
