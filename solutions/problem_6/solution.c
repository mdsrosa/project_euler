#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "utils.h"

#define MAX 100
#define MIN 1

double solution(){
    double x;
    double sum_of_naturals_squared = 0;
    double square_of_the_sum;
    square_of_the_sum = pow((double)(100 * (100+1)) / 2, (double) 2);

    for(x = 1; x < 101; x++){
        sum_of_naturals_squared += pow(x, (double) 2);
    }

    return fabs(sum_of_naturals_squared - square_of_the_sum);
}

int solution2(){
    int range, sum_of_naturals_squared, square_of_the_sum;
    range = MAX - MIN + 1;
    sum_of_naturals_squared = (range * (range + 1) * (2 * range + 1)) / 6;
    square_of_the_sum = pow((double)((MAX + MIN) * (MAX - MIN + 1) / 2), (double) 2);

    return abs(sum_of_naturals_squared - square_of_the_sum);
}

int main(int argc, char *argv[]){
    printf("=> Solution 1\n");
    double_time_it(solution);

    printf("=> Solution 2\n");
    int_time_it(solution2);

    return 0;
}
