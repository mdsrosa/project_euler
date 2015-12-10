#include <iostream>
#include <iomanip>
#include <ctime>

int solution(){
    int s, a, b, c; 
    
    s = 0;
    a = 1;
    b = 1;
    c = a + b;

    while(c < 4000000){
        s += c;
        a = c + b;
        b = c + a;
        c = a + b;
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