Below is the equivalent C++ code for the given Go code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "foo";
    s += "bar";
    std::cout << s;
    return 0;
}
```
This C++ program performs the same operations as the Go code. It declares a string variable `s` and assigns it the value "foo". The append operation is performed using the '+=' operator, which concatenates the string literal "bar" to the end of `s`. Finally, the contents of `s` are printed to the console using `std::cout`.
