Here's how you can convert the given Rust code to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string buffer;
    int nums[2];
    
    for(int i = 0; i < 2; ++i) {
        std::getline(std::cin, buffer);
        nums[i] = std::stoi(buffer);
    }
    
    int a = nums[0];
    int b = nums[1];

    if(a < b){
        std::cout << a << " is less than " << b;
    } else if(a == b) {
        std::cout << a << " equals " << b;
    } else {
        std::cout << a << " is greater than " << b;
    }
    
    return 0;
}
```

This C++ code achieves the same functionality as the Rust code. It reads two integers from standard input, and then compares them to determine if the first number is less than, equal to, or greater than the second one.
