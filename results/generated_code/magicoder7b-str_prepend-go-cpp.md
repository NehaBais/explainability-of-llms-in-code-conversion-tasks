 In C++, you can achieve this by using `std::string` instead of Golang's built-in string type. Here is how it could be done:

```cpp
#include <iostream>
#include <string>

int main() {
    // create a string variable equal to any text value
    std::string s = "world!"; 
    
    // prepend the string variable with another string literal
    s = "Hello, " + s; 

    // print the result
    std::cout << s << std::endl;

    return 0;
}
```
This code will output: `Hello, world!`
