The equivalent C++ code would be as follows:

```cpp
#include <iostream>
#include <string>

int main() 
{
    // text assigned to a string variable
    std::string s = "hello";
    
    // output string variable
    std::cout << s << std::endl;

    // concatenate variable and literal, assign result to another string variable
    std::string s2 = s + " literal";

    // output second string variable
    std::cout << s2 << std::endl;
    
    return 0;
}
```
In this code, the `std::string` is used to declare a string variable in C++. The '+' operator is used for concatenating two strings as in Go language. `std::cout` prints out the output and `std::endl` serves to create a new line after each print operation.

