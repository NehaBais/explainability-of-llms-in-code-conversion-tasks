Here is your code converted to C++:

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string str = "12345678";
    str += "9!";
    std::cout << str;
    
    return 0;
}
```

In the C++ version, we use `std::string` to handle strings. We don't need to explicitly define the type of the string because C++ is a statically typed language and knows that `str` is a string due to the initial assignment.

The `+=` operator in C++ appends a string literal to an existing string just like it does in Python.

Finally, we use `std::cout << str;` to print out the contents of the variable after the append operation.
