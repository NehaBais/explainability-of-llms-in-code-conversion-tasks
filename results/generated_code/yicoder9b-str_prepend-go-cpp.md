In C++, you can accomplish this task by declaring and initializing a `std::string` object just like in Go language. 
The string concatenation is done using the '+' operator as well. Here's how it could be implemented:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "world!";
    s = "Hello, " + s;
    
    // print the resulting string
    std::cout << s << std::endl;

    return 0;
}
```
