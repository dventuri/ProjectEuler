#include <iostream>

unsigned int sumMultiplesUpTo(int mult1, int mult2, int upTo);
unsigned int sumDivisibleBy(int n);

int main() {
    unsigned int sum;

    sum = sumMultiplesUpTo(3, 5, 1000);
    std::cout << sum << std::endl;

    sum = sumDivisibleBy(3)+sumDivisibleBy(5)-sumDivisibleBy(3*5);
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

unsigned int sumDivisibleBy(int n) {
    int target = 1000-1;
    int p;

    p = target / n;
    return n*(p*(p+1)) / 2;
}