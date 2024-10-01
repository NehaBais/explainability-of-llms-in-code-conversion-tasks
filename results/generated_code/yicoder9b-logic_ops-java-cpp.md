Here is the equivalent C++ code for your Java function. Please note, in C++ we use std::boolalpha to print boolean values as true or false instead of 1 and 0 respectively.

```cpp
#include <iostream>

void logic(bool a, bool b){
  std::cout << "a AND b: " << std::boolalpha << (a && b) << std::endl;
  std::cout << "a OR b: " << std::boolalpha << (a || b) << std::endl;
  std::cout << "NOT a: " << std::boolalpha << !a << std::endl;
}
```
