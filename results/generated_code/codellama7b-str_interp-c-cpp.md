The code can be converted to C++ as follows:
```
#include <iostream>

int main() {
  const std::string extra = "little";
  std::cout << "Mary had a " << extra << " lamb." << std::endl;
  return 0;
}
```
In this code, we've replaced the `printf` function with `std::cout` to print the string to the console. We've also changed the type of the `extra` variable from `const char*` to `std::string` to make it easier to work with in C++. Finally, we've added a call to `std::endl` to print a newline character after the string.
