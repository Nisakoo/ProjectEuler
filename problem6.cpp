#include <iostream>

int main() {
    int values = 100;
    int result = 0;

    for (int i = 1;i <= values;i++) {
        for (int j = i + 1;j <= values;j++) {
            result += 2*i*j;
        }
    }

    std::cout << result << std::endl;

    return 0;
}