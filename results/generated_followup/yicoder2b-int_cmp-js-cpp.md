There are a few errors in your JavaScript code, but it does not exactly correspond to C++. Here is what the error message from gcc tells us:
```cpp
/tmp/yicoder2b-int_cmp-js-cpp.cpp:1:1: error: unknown type name 'function'
    1 | function compare(a, b) {
      | ^
This means that in C++ we can’t use the JavaScript `function` keyword because it does not exist in C++. You have to define a function using the keyword `defining class` or `struct`. In your code, you are trying to compare two variables of the same type by using different types (a number and string) which is not allowed in C++ as well. Here's how the corrected version might look like:
```cpp
#include <iostream>
int main() {
  compare(10, 20);   // For testing purposes. Can be replaced with user inputs.
  return 0;
}

void compare (int a, int b) {
    if (a == b)
      std::cout << a << " equals " << b << std::endl;
    if (a < b)
      std::cout << a << " is less than " << b << std::endl;
    if (a > b)
      std::cout << a << " is greater than " << b << std::endl;
}
```
This function compares two integers and prints out messages based on whether they are equal, less or greater.
