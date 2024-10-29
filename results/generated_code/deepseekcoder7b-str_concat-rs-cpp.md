In C++, you can use the `std::string` class from STL to achieve similar functionality. Below is a possible equivalent for your provided Rust code snippet in C++. 

```cpp
#include <iostream>
#include <string>
int main() {
    std::string s = "hello";
    std::cout << s << std::endl;
    
    s += " world";
    std::cout << s << std::endl;

    return 0;
}
```
In this C++ code, `std::string` is used to create and manipulate strings. The append operation uses the `+=` operator which concatenates another string onto the end of the existing string. Then it outputs both original string (s) as well as resulting combined string (s1). 

Please make sure you include the necessary headers iostream for input-output operations and string library for using std::string object. Also, return statement is needed at the end of main function to indicate that program has executed successfully in C++. If not explicitly returned, compiler would understand it as a "return 0;" implicitly.

