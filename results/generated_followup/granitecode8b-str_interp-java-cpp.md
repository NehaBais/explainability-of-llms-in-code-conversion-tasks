The error message indicates that the compiler cannot find the necessary header files for C++ string manipulation. To fix this, we need to include the appropriate header file for string I/O in C++. The correct code is shown below:
```cpp
#include 
int main() {
  std::string adjective = "big";
  std::string lyric = "Mary had a " + adjective + " lamb";
  return 0;
}
```
Note that we have added the `iostream` header to allow us to use the `std::string` type and the `+` operator for string concatenation.

