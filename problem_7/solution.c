#include <stdio.h>
#include <time.h>
#include <math.h>

#define LIMIT 10001

clock_t begin, end;
double time_spent;

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

int find_10001st_prime(){
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
    int result;

    begin = clock();
    result = find_10001st_prime();
    end = clock();

    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("=> Result: %d\n", result);
    printf("=> Time: %fs\n", time_spent);
}