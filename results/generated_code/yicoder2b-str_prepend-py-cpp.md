The equivalent C++ code for the given Python script is as follows: 

```cpp
#include <iostream>
#include <string>
int main() {
    std::string s = "12345678";
    s.insert(0, "0");  // by using the insert function of string class in C++
    std::cout << s << std::endl;
    return 0;
}
```
In this C++ code:
- `#include <iostream>` and `#include <string>` are used to include standard input/output stream and string library in the program.
- The data type used for strings is `std::string`, which is a sequence of characters.
- `s = "12345678";` creates a string object s with content "12345678".
- `insert(0, "0")` appends the character '0' to the beginning of the string s.
- Finally, we print out the final result using `std::cout << s << std::endl;` which prints the string followed by a newline (similar to Python’s print function).
