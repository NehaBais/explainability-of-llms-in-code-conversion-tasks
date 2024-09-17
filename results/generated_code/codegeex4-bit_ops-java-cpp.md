```cpp
#include <iostream>
#include <stdint.h>

void bitwise(int a, int b){
    std::cout << "a AND b: " << (a & b) << std::endl;
    std::cout << "a OR b: " << (a | b) << std::endl;
    std::cout << "a XOR b: " << (a ^ b) << std::endl;
    std::cout << "NOT a: " << ~a << std::endl;
    std::cout << "a << b: " << (a << b) << std::endl; // left shift
    std::cout << "a >> b: " << (a >> b) << std::endl; // arithmetic right shift
    std::cout << "a >>> b: " << ((unsigned)a >> b) << std::endl; // logical right shift
}

uint32_t rotate_left(uint32_t value, unsigned int count){
    uint32_t mask = 31;
    count &= mask;
    return (value << count) | (value >> (32 - count));
}

uint32_t rotate_right(uint32_t value, unsigned int count){
    uint32_t mask = 31;
    count &= mask;
    return (value >> count) | (value << (32 - count));
}

int main(){
    int a = 5; //first integer
    int b = 2; //second integer

    bitwise(a, b);

    std::cout << "a rol b: " << rotate_left(a, b) << std::endl;
    std::cout << "a ror b: " << rotate_right(a, b) << std::endl;

    return 0;
}
```
In C++, we need to manually implement the rotate operations as they are not built-in functions. The mask is used here to ensure that the count is within the valid range for rotation (0-31). The rotate_left and rotate_right functions do bitwise rotation of a 32-bit integer using the left and right bitwise shift operators respectively.

Remember to compile this program with `-std=c++11` or later to support uint32_t data type.
