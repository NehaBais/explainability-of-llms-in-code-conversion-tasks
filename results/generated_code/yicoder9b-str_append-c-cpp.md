Sure! Here is the equivalent C++ code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Good Morning";
    const std::string cstr1 = " to all";
    const std::string cstr2 = " !!!";

    // append the strings in C++ using '+' operator
    str += cstr1 + cstr2;

    std::cout << str << std::endl;

    return 0;
}
```
In this code, we are creating two `string` variables and appending them to another variable in the most idiomatic way using C++. The result is then shown with the `cout` statement.
