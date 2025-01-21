 The error occurs because there is no main function in the C++ code snippet. In C++, the program starts with the main() function where execution of the program begins and ends. Therefore, the compiler looks for a main function to start executing from but it can't find one in your case so it throws an "Undefined symbols for architecture arm64" error.

Here is how you can fix this issue:
```cpp
int main() {
  logic(true, false); // call the function with some parameters
  return 0;
}
```
This will work because a main function is defined to start execution from. The logic function will be called within this main function scope. Also, you need to include `#include <iostream>` at the beginning of your code in order to use `std::cout` for outputting information.
