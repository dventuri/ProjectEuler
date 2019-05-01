#include <iostream>

int main() {
    
    int value1 = 3;
    int value2 = 5;
    int valueMax = 1000;
    int m = 0;
    for(int i = 1; i < valueMax; i++)
    {
        if ((i % value1 == 0) || (i % value2 ==0) ) {
            m += i;
        }
    }
    
    std::cout << m << std::endl;

    return 0;
}