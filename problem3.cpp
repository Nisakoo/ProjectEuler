#include <iostream>

bool isPrime(long long number) {
    if (number == 1) {
        return false;
    } else if (number % 2 == 0) {
        return false;
    }

    for (int i = 3;i < number;i += 2) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    long long value = 600851475143;
    long long n = 2;
    long long d = 1;

    while (n <= value) {
        std::cout << n << ' ' << d << std::endl;

        if (value % n == 0) {
            if (isPrime(n)) {
                value /= n;
                d = n;
            } else {
                value /= n;
            }

            n = 2;
        }

        if (n == 2) {
            n++;
        } else {
            n += 2;
        }
    }

    std::cout << std::endl << d << std::endl;

    return 0;
}