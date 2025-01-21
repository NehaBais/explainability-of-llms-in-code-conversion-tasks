 Certainly! Below is the equivalent C++ code to achieve the same functionality as your Python script:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "12345678";
    str += "9!";
    std::cout << str << std::endl;
    return 0;
}
```

Explanation:
1. We include the necessary headers for input/output operations and string manipulation in C++.
2. We declare a `std::string` variable named `str` and initialize it with the value "12345678".
3. We use the `+=` operator to append the string literal "9!" to the existing string.
4. Finally, we output the contents of the string using `std::cout`.
