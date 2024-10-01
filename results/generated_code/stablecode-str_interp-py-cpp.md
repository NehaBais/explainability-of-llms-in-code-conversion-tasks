In C++, we can use `std::string` for the string type and `std::cout` to output the result. 

However, C++ does not natively support string interpolation in the way that Python does. In order to achieve a similar effect, we will need to use a more complex approach that involves using `std::stringstream`.

Here is an equivalent code in C++:
```c++
#include <iostream>
#include <sstream>

int main() {
  std::string extra = "little";
  std::string new_str;

  std::stringstream ss;
  ss << "Mary had a " << extra << " lamb.";
  new_str = ss.str();

  std::cout << new_str << std::endl;

  return 0;
}
```
This code uses a `std::stringstream` object to construct the string interpolation dynamically at runtime. The resulting interpolated string is then stored in `new_str`, which is printed out using `std::cout`.
