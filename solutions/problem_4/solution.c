#include <stdio.h>
#include "utils.h"

int solution(){
    int x, y, v, largest_number;

    for(x = 100; x < 999; x++){
        for(y = 100; y < 999; y++){
            v = x * y;
            if(v > largest_number && is_palindrome(v) == 0){
                largest_number = v;
            }
        }
    }

    return largest_number;
}

int main(int argc, char *argv[]){
    return int_time_it(solution);
}
