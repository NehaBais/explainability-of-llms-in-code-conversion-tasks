Here's the equivalent C++ code:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums(2);

    for (int i = 0; i < 2; ++i) {
        std::cin >> nums[i];
    }

    int a = nums[0];
    int b = nums[1];

    if (a < b) {
        std::cout << a << " is less than " << b << std::endl;
    } else if (a == b) {
        std::cout << a << " equals " << b << std::endl;
    } else if (a > b) {
        std::cout << a << " is greater than " << b << std::endl;
    }

    return 0;
}
```
This C++ code replicates the functionality of the original Rust code. It first initializes a vector with two integers. Then, it reads these two numbers from the standard input and stores them in the `nums` vector. 

The program then compares `a` and `b`, printing a different message for each comparison result.
