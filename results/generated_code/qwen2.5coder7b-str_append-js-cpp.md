Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string s1 = "Hello";

    // Append string literal to variable using '+=' operator.
    s1 += ", World!";

    // Show the contents of the variable after appending operation.
    std::cout << s1;

    return 0;
}
```

In C++, you use `std::cout` instead of `print()` to output text, and you need to include `<iostream>` for this. The `+=` operator is used to append a string literal to an existing string variable in the same way as `s1 += ", World!"` does in your JavaScript code.
