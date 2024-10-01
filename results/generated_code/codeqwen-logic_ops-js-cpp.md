Here is the equivalent C++ code for your JavaScript function. Please note that in C++, you need to provide the type of variables you are declaring.

```cpp
#include <iostream>

void logic(bool A, bool B) {
  std::cout << "A AND b: " << (A && B) << std::endl;
  std::cout << "A OR b: " << (A || B) << std::endl;
  std::cout << "NOT a: " << (!A) << std::endl;
}

int main() {
  logic(true, true); // Replace with your boolean values.
  return 0;
}
```

This C++ code is similar to the JavaScript version you provided, it takes two logical (boolean) parameters and prints their results of "and", "or", and "not". You need to replace `true, true` with the boolean values you want to input.
