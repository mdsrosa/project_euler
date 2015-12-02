#include <stdio.h>
#include <math.h>
#include "utils.h"

int solution(){
    int limit, a, b, c;

    limit = 1000;

    for(b = 1; b < limit; b++){
        for(c = 1; c < limit; c++){
            a = limit - b - c;

            if(pow(a, 2) + pow(b, 2) == pow(c, 2)){
                return a * b * c;
            }
        }
    }

    return 0;
}

int main(int argc, char *argv[]){
    return int_time_it(solution);
}