```cpp
#include <iostream>

void printLogic(bool a, bool b) {
    std::cout << "a and b is: " << (a && b) << std::endl;
    std::cout << "a or b is: " << (a || b) << std::endl;
    std::cout << "not a is: " << (!a) << std::endl;
}

int main() {
    bool a = true, b = false;
    printLogic(a, b);
    return 0;
}
```
This C++ code does exactly the same thing as your Golang function. It takes two boolean values and prints out the result of "and", "or" on both arguments and "not" on the first argument. The `std::endl` is used to insert a newline character at the end of each print statement, just like `fmt.Println` in Golang.
