#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

clock_t begin, end;
double time_spent;

int is_palindrome(int n){
	char n_str[10];
	snprintf(n_str, sizeof(n_str), "%d", n); // convert int to str
	
	int length = strlen(n_str);
	int start, end, middle;
	
	end = length - 1;
	middle = length / 2;
	
	for(start = 0; start < middle; start++){
		if(n_str[start] != n_str[end]){
			break;
		}
		end--;
	}

	if(start == middle)
		return 0;
		
	return -1;
}

int main(int argc, char *argv[]){
	begin = clock();
	
	int x, y, v, largest_number;
  
    for(x = 100; x < 999; x++){
      for(y = 100; y < 999; y++){
        v = x * y;
        if(v > largest_number && is_palindrome(v) == 0){
            largest_number = v;
          }
        }
      }

  end = clock();
  time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("=> Result: %d\n", largest_number);
  printf("=> Time: %fs\n", time_spent);
}
