This error arises due to the fact that Python's built-in "join" function expects an iterable input, but `", "` is not iterable (it's a string). In C++, we can solve this problem by converting `", "` to an array of characters.

The corrected C++ code includes the use of `const char*` for string literals, which enables us to include them in an array without causing a compilation error. We also updated the original strings with new values (which wouldn't alter their content) before joining them into a final string. 
For the revised code, if we wish to maintain the original functionality and just change the order of operations, it will be slightly different:
```cpp
#include <iostream>
#include <string>
int main() {
  std::string s1 = "hello";
  s1 += " world";
  std::cout << s1 << std::endl; // Output: hello world

  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl; // Output: hello world world

  const char* sep[] = {", ", nullptr};
  std::string s3 = join(sep, {s1, "world", "mom"});
  std::cout << s3 << std::endl; // Output: hello, world, mom

  char sep2[] = {',', ' '};
  std::string s4 = join(&sep2, {s1, "world", "mom"});
  std::cout << s4 << std::endl; // Output: hello world mom
}
```
