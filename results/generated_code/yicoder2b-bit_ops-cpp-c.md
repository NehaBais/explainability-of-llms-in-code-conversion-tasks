Here is the equivalent C code for your given C++ program:

```c
#include <iostream>

void bitwise(int a, int b) {
    // perform a bitwise AND on 'a' and 'b', then print the result. Note that & is an operator in C++
    std::cout << "a and b: " << (a & b)  << std::endl;

    // perform a bitwise OR on 'a' and 'b', then print the result. Note that | is an operator in C++
    std::cout << "a or b:  " << (a | b)  << std::endl;

    // perform a bitwise XOR on 'a' and 'b', then print the result. Note that ^ is an operator in C++
    std::cout << "a xor b: " << (a ^ b)  << std::endl;

    // perform NOT operation on 'a', then print the result. Note that ~ is an unary operator in C++
    std::cout << "not a:   " << (~a)     << std::endl;

    // shift 'a' towards left by 'b' places, then print the result. Note that << is an operator in C++ but works differently than in C++
    std::cout << "a shl b: " << (a << b) << std::endl; 

    // similar to above, right shift 'a' towards right by 'b' places and print the result. Note that >> is an operator in C++ but works differently than in C++
    std::cout << "a shr b: " << (a >> b) << std::endl; 
    unsigned int ua = a;
    // rotate left 'ua' towards left by 'b' places and print the result. Note that std::rotl is a function in the Standard Library c++20 and works differently than in C++
    std::cout << "a lsr b: " << (std::rotl(ua, b)) << std::endl; 

    // rotate right 'ua' towards right by 'b' places and print the result. Note that std::rotr is a function in the Standard Library c++20 and works differently than in C++
    std::cout << "a ror b: " << (std::rotr(ua, b)) << std::endl; 
}
```
