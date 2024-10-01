Sure, the equivalent C++ code would be:

```cpp
#include <iostream>
#include <string> 

bool logic(const bool& a, const bool& b){
    std::cout << "a and b:" << (a && b) << std::endl;
    std::cout << "a or b:" << (a || b) << std::endl;
    std::cout << "not a:" << !a << std::endl;
}
```
Note that in C++, we cannot directly print the values of logical variables. So, instead of printing them as they are, we store their boolean equivalent (true/false) and then print these equivalents. Also, to return the bool value directly from the function, we use a const reference `const bool& a` instead of the variable itself.
