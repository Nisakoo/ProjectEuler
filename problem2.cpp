#include <iostream>

int main() {
    int a = 0;
    int b = 2;
    int c, result;
    
    while (a <= 4'000'000) {
        result += a;

        c = a;
        a = a*4 + b;
        b = c;
        std::cout << a << ' ';
    }

    std::cout << std::endl << result << std::endl;

    return 0;
}