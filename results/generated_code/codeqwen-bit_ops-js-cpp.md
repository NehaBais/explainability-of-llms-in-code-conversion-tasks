Here is the equivalent C++ code for your JavaScript function. It performs each operation on the first integer 'A' with a shift/rotate amount of the second integer 'B'.

```cpp
#include <iostream>

void bitwise(int A, int B){
    std::cout << "A AND B: " << (A & B) << std::endl;
    std::cout << "A OR B: " << (A | B) << std::endl;
    std::cout << "A XOR B: " << (A ^ B) << std::endl;
    std::cout << "NOT A: " << ~A << std::endl;
    std::cout << "A << B: " << (A << B) << std::endl; // left shift
    std::cout << "A >> B: " << (A >> B) << std::endl; // arithmetic right shift
    std::cout << "A >>> B: " << (A >>> B) << std::endl; // logical right shift
}

int main() {
    int A = 5;
    int B = 3;
    bitwise(A, B);
    return 0;
}
```

Please note that the '>>>' operator in JavaScript is not the same as the '>>>' operator in C++. In C++, there are no unsigned right shift operators. Instead, you can use an unsigned cast to achieve a similar effect:

