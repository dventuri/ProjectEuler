#include <iostream>

unsigned int sumMultiplesUpTo(int mult1, int mult2, int upTo);

int main() {
    unsigned int sum;

    sum = sumMultiplesUpTo(3, 5, 1000);

    std::cout << sum << std::endl;

    return 0;
}

unsigned int sumMultiplesUpTo(int mult1, int mult2, int upTo) {
    unsigned int sum = 0;
    for (int i = 1; i < upTo; i++) {
        if (!(i % mult1) || !(i % mult2) ) {
            sum += i;
        }
    }

    return sum;
}