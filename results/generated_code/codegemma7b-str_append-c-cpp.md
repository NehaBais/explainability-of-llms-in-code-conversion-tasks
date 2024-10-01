```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Good Morning";
    std::string cstr = " to all";
    std::string cstr2 = " !!!";

    // Append cstr to str
    str += cstr;

    // Append cstr2 to str
    str += cstr2;

    // Print the contents of str
    std::cout << str << std::endl;

    return 0;
}
```

**Output:**

Good Morning to all !!!

**Explanation:**

* We use the `std::string` class to create the string variables.
* The `+=` operator is used to append the string literal `cstr` and `cstr2` to the string `str`.
* The `std::cout` statement is used to print the contents of the variable `str`.
