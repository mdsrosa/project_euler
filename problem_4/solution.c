#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

clock_t begin, end;
double time_spent;

void reverse_string(char *str){
    // skip null
    if (str == 0){ return; }
    // skip empty string
    if (*str == 0){ return; }
    // get range
    char *start = str;
    char *end = start + strlen(str) - 1; // -1 for \0
    char temp;
    // reverse
    while (end > start){
    	temp = *start;
    	*start = *end;
    	*end = temp;
    	++start;
    	--end;
    }
}

int is_palindrome_number(int n){
  char n_str[10], r_str[10];
  snprintf(n_str, sizeof(n_str), "%d", n); // convert int to str
  snprintf(r_str, sizeof(r_str), "%d", n);
  reverse_string(0);
  reverse_string(r_str);
  if(strcmp(n_str, r_str) == 0){
    return 0;
  }else{
    return -1;
  }
}

int main(int argc, char *argv[]){
  begin = clock();

  int x, y, v, largest_number;
  for(x = 100; x < 999; x++){
    for(y = 100; y < 999; y++){
      v = x * y;
      if(v > largest_number){
        if(is_palindrome_number(v) == 0){
          largest_number = v;
        }
      }
    }
  }

  end = clock();
  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("=> Result: %d\n", largest_number);
  printf("=> Time: %fs\n", time_spent);
}
