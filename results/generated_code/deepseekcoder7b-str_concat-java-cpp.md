In C++, you can use the `std::string` class from the Standard Template Library (STL). Here is how to perform similar operations as in your Java code:

```cpp
#include <iostream>
#include <string>

int main(){
    std::string s = "hello";
    std::cout << s + " literal" << std::endl;
    
    // Create another string variable whose value is the original variable concatenated with another string literal.
    std::string s2 = s + " literal"; 
    std::cout << s2 << std::endl;
  
    return 0;
}
```
In this C++ code, `std::string` is used to create and manipulate strings. The '+' operator can be used for concatenation of two string objects like in Java but unlike Java it does not support implicit type conversion, so explicit conversion should be done while appending an integer or other non-string types to a string.

