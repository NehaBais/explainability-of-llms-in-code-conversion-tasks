 Here's the C++ code that meets your requirements:
```cpp
#include <iostream>
void print_logic(int a, int b)
{
    std::cout << "a and b is " << (a && b) << '\n';
    std::cout << "a or b is " << (a || b) << '\n';
    std::cout << "not a is " << !a << '\n';
}
int main() {
    print_logic(true, false);
    return 0;
}
```
