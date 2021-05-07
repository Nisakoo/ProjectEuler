#include <iostream>

int main() {
    unsigned long int result = 0;

    for (int i = 3;i <= 1000;i += 3) {
        result += i;
    }

    for (int i = 5;i <= 1000;i += 5) {
        if (i % 3 != 0) {
            result += i;
        }
    }

    std::cout << result << std::endl;

    return 0;
}