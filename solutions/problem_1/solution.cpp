#include <iostream>
#include <iomanip>
#include <ctime>

int is_divisible_by(int n1, int n2){
    return n1 % n2 == 0;
}

int solution(){
    int list[1000], i, s;
    s = 0;

    for(i = 0; i < 1000; i++)
        if(is_divisible_by(i, 3) || is_divisible_by(i, 5)){
            list[i] = i;
            s += i;
        }

    return s;
}

int main(){
    std::clock_t start = std::clock();
    int output = solution();
    std::clock_t end = std::clock();

    std::cout << "=> Result: " << output << "\n";
    std::cout << std::fixed << std::setprecision(6) << "=> Time: "
              << (1000.0 * (end - start) / CLOCKS_PER_SEC) / 1000.0 << "s\n";

    return 0;
}