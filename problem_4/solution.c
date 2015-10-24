#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
  printf("%d\n", largest_number);
}
