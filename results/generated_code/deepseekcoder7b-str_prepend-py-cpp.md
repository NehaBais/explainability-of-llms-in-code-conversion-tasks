Sure, here is the equivalent C++ code.

```cpp
#include <iostream>
#include <string>  // Need this for string functionality

int main() {
    std::string s = "12345678"; 
    s = "0" + s;   // by concatenation
    std::cout << s;
    
    return 0;  // Main function should always return an integer. It is good practice to use '0' as the standard return value for a successful execution.
}
```

