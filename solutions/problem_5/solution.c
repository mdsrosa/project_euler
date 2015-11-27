#include <stdio.h>
#include <time.h>

clock_t begin, end;
double time_spent;

#define LIST_SIZE 20

unsigned long mdc(unsigned long a, unsigned long b){
  unsigned long mod;
  mod = a % b;
  while(mod != 0){
    a = b;
    b = mod;
    mod = a % b;
  }
  return b;
}

unsigned long mmc(unsigned long a, unsigned long b){
  unsigned long r = a * b / mdc(a, b);
  return r;
}

unsigned long reduce(unsigned long (*f)(unsigned long, unsigned long), unsigned long *list){
  int i, next_item_pos;
  unsigned long result, item;
  result = (*f)((*list + 0), (*list + 1));
  next_item_pos = 2;
  for(i = 0; i < LIST_SIZE && next_item_pos < LIST_SIZE; i++){
    item = (*list + next_item_pos);
    result = (*f)(result, item);
    next_item_pos++;
  }
  return result;
}

int main(int argc, char *argv[]){
  begin = clock();

  int i, highest_number;
  unsigned long l[LIST_SIZE];
  unsigned long *list;
  highest_number = 0;
  for(i = 0; i < LIST_SIZE; i++){
    l[i] = i+1;
  }
  list = l;
  unsigned long result = reduce(mmc, list);

  end = clock();
  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("=> Result: %ld\n", result);
  printf("=> Time: %fs\n", time_spent);

  return 0;
}
