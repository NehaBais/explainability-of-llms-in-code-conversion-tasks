 The equivalent C++ code would be:

```cpp
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Enter two integers: ";

    int a, b;
    if(std::cin >> a >> b) {
        if (a < b)
            std::cout << a << " is less than " << b << "\n";
        else if (a == b)
            std::cout << a << " equals " << b << "\n";
        else 
            std::cout << a << " is greater than " << b << "\n";
    } else {
        std::cout << "Invalid input.\n";
    }

    return 0;
}
```
This code reads two integers from the user, checks each condition using `<`, `==` and `>`, then outputs the result accordingly. If anything is not a valid integer it will output an error message.
