This code cannot be directly converted to C++ as it requires an interactive stdin/stdout input from the user, which is not available in C++. However, if you want to simulate this for testing purposes, you can use a combination of `std::cin` and `std::cout` (for console input and output). Here's how you could write your Rust program in a more C++-like way:

```c++
#include <iostream>

int main() {
    int num1,num2;
    std::cout << "Enter the first integer:";
    std::cin >> num1;
    std::cout << "Enter the second integer:";
    std::cin >> num2;

    if (num1 < num2) {
        std::cout<<"The first number is less than the second."<<std::endl;
    } else if (num1 == num2) {
        std::cout<<"The numbers are equal."<<std::endl;
    } else if(num1 > num2){
        std::cout<<"The first number is greater than the second."<<std::endl;
    };
    return 0;
}
```
This program will take two integers as input from user and print a message based on comparison of those numbers.
