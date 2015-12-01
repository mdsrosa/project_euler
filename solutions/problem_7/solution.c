#include <stdio.h>
#include "utils.h"

#define LIMIT 10001

int solution(){
    int number, counter;

    number = 1;
    counter = 2;

    while(counter <= LIMIT){
        number = number + 2;
        if(is_prime(number) == 1){
            counter = counter + 1;
        }
    }

    return number;
}

int main(int argc, char *argv[]){
    return int_time_it(solution);
}