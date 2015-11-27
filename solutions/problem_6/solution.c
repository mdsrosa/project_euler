#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX 100
#define MIN 1

clock_t begin, end;
double time_spent, result;

void calculation(){
    double x;
    double sum_of_naturals_squared = 0;
    double square_of_the_sum;
    square_of_the_sum = pow((double)(100 * (100+1)) / 2, (double) 2);

    for(x = 1; x < 101; x++){
        sum_of_naturals_squared += pow(x, (double) 2);
    }

    result = fabs(sum_of_naturals_squared - square_of_the_sum);
}

void calculation_2(){
    int range, sum_of_naturals_squared, square_of_the_sum;
    range = MAX - MIN + 1;
    sum_of_naturals_squared = (range * (range + 1) * (2 * range + 1)) / 6;
    square_of_the_sum = pow((double)((MAX + MIN) * (MAX - MIN + 1) / 2), (double) 2);
    result = abs(sum_of_naturals_squared - square_of_the_sum);
}

int main(int argc, char *argv[]){
    begin = clock();
    calculation();
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("=> Solution 1\n");
    printf("=> Result: %.f\n", result);
    printf("=> Time: %fs\n", time_spent);

    begin = clock();
    calculation_2();
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("=> Solution 2\n");
    printf("=> Result: %.f\n", result);
    printf("=> Time: %fs\n", time_spent);
}
