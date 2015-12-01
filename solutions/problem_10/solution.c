#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

#define LIMIT 2000000

unsigned long solution(){
    unsigned long n;
    unsigned long total_sum = 0L;
    n = 2L;

    while(n <= LIMIT){
        if(is_prime(n) == 1){
            total_sum = total_sum + n;
        }
        n += 1L;
    }

    return total_sum;
}

int main(int argc, char *argv[]){
    unsigned_long_time_it(solution);
    return 0;
}
