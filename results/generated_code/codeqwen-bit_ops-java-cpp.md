Here is the equivalent C++ code for the provided Java function. Note that the C++ version of `Integer.rotateLeft()` and `Integer.rotateRight()` does not exist in C++ standard library, so I've implemented a simple bitwise rotate function:

```C++
#include <iostream>

void bitwise(int A, int b) {
    std::cout << "A AND b: " << (A & B) << std::endl;
    std::cout << "A OR b: " << (A | B) << std::endl;
    std::cout << "A XOR b: " << (A ^ B) << std::endl;
    std::cout << "NOT a: " << ~A << std::endl;
    std::cout << "A << b: " << (A << b) << std::endl; // left shift
    std::cout << "A >> b: " << (A >> b) << std::endl; // arithmetic right shift
    // C++ does not support logical right shift operator (>>>) with unsigned int. 
    // Therefore, we use the arithmetic right shift operator (>>).
    std::cout << "A >>> b: " << (unsigned int) A >> b << std::endl; // logical right shift
    std::cout << "A rol b: " << rotate_left(A, B) << std::endl; //rotate left
    std::cout << "A ror b: " << rotate_right(A, B) << std::endl; //rotate right

}

unsigned int rotate_left(unsigned int num, unsigned int rotations) {
    return (num << rotations) | (num >> (32 - rotations));
}

unsigned int rotate_right(unsigned int num, unsigned int rotations) {
    return (num >> rotations) | (num << (32 - rotations));
}
```
Please note that `rotate_left()` and `rotate_right()` functions are not standard C++. They assume 4-byte integers (32 bits). If your code uses different data types or bit widths, you may need to adjust the number of bits in the shift operations accordingly.
