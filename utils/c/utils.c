#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "utils.h"


int int_time_it(int f()){
    clock_t begin, end;
    double time_spent;

    begin = clock();
    int output = f();
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("=> Result: %d\n", output);
    printf("=> Time: %fs\n", time_spent);

    return 0;
}

long long_time_it(long f()){
    clock_t begin, end;
    double time_spent;

    begin = clock();
    long output = f();
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("=> Result: %ld\n", output);
    printf("=> Time: %fs\n", time_spent);

    return 0;
}

double double_time_it(double f()){
    clock_t begin, end;
    double time_spent;

    begin = clock();
    double output = f();
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("=> Result: %f\n", output);
    printf("=> Time: %fs\n", time_spent);

    return 0.0;
}

unsigned long unsigned_long_time_it(unsigned long f()){
    clock_t begin, end;
    double time_spent;

    begin = clock();
    unsigned long output = f();
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("=> Result: %ld\n", output);
    printf("=> Time: %fs\n", time_spent);

    return 0L;
}

int is_divisible_by(int x, int y){
    return x % y == 0;
}

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

int is_prime(int n){
    if(n == 1){
        return 0;
    }else{
        if(n < 4){
            return 1;
        }else{
            if(n % 2 == 0){
                return 0;
            }else{
                if(n < 9){
                    return 1;
                }else{
                    if(n % 3 == 0){
                        return 0;
                    }else{
                        int result, f;
                        result = floor(sqrt(n));
                        f = 5;
                        while(f <= result){
                            if(n % f == 0 || n % (f + 2) == 0){
                                return 0;
                            }
                            f = f + 6;
                        }
                        return 1;
                    }
                }
            }
        }
    }
}

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

unsigned long reduce(unsigned long (*f)(unsigned long, unsigned long), unsigned long *list, int list_size){
  int i, next_item_pos;
  unsigned long result, item;
  result = (*f)((*list + 0), (*list + 1));
  next_item_pos = 2;
  for(i = 0; i < list_size && next_item_pos < list_size; i++){
    item = (*list + next_item_pos);
    result = (*f)(result, item);
    next_item_pos++;
  }
  return result;
}