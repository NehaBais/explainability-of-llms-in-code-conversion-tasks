Your code in C++ would look like this. The main differences are replacing `scanf` with `std::cin` and adding std::cout for output:

```cpp
#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    
    if (a < b)
        std::cout << a << " is less than " << b << std::endl;

    if (a == b)
        std::cout << a << " is equal to " << b << std::endl;

    if (a > b)
        std::cout << a << " is greater than " << b << std::endl;
        
    return <｜begin▁of▁sentence｜>0<i>;
}
```
This code will prompt the user to input two numbers and then compare them. The `std::cout` function prints the comparison message in each case where the corresponding condition (less, equal or greater) is true.

