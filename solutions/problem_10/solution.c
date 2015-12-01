#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

#define LIMIT 2000000

unsigned long solution(){
    unsigned long n;
    unsigned long total = 0L;
    n = 2L;

    while(n <= LIMIT){
        if(is_prime(n) == 1){
            total = total + n;
        }
        n += 1L;
    }

    return total;
}

unsigned long solution2(){
    unsigned long n, total;
    total = 5;
    n = 5;

    while(n <= LIMIT){
        if(is_prime(n) == 1){
            total = total + n;
        }
        n = n + 2;
        if(n <= LIMIT && is_prime(n) == 1){
            total = total + n;
        }
        n = n + 4;
    }

    return total;
}

int main(int argc, char *argv[]){
    printf("=> Solution 1\n");
    unsigned_long_time_it(solution);

    printf("=> Solution 2\n");
    unsigned_long_time_it(solution2);

    return 0;
}