#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
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