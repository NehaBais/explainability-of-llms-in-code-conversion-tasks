Below is the equivalent C++ code for the provided Python script:

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

In the above C++ code:
- The Python's `+=` operator is replaced with `+=` in C++, which appends one string to another.
- The Python print function, `print(str)`, is replaced with `std::cout << str << std::endl;` in C++. 
These changes make the C++ code equivalent to the given Python script.
