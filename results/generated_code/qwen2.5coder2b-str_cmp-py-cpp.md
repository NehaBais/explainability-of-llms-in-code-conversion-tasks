In C++, we can use the `std::string` class to implement this. The `std::string` class provides comparison operators which compare two strings based on their lexicographical order.

```cpp
#include <iostream>
#include <string>

bool compare(const std::string& a, const std::string& b) {
    if (a == b) {
        std::cout << a << " is equal to " << b << '\n';
    } else if (a < b) {
        std::cout << a << " is less than " << b << '\n';
    } else {
        std::cout << a << " is greater than " << b << '\n';
    }
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);

    return 0;
}
```

In this code:

- The `compare` function compares two strings and prints the result in a formatted manner.
- In `main`, we use the function to compare several different data types: strings with the same content, strings with different contents but the same lexicographical order, numbers (integers and floats), and integers.
