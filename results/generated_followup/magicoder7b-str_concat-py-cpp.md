 The error occurred because C++ doesn't have an overloaded `std::vector` constructor that takes initializer list as arguments, whereas Python does. Also, for range-based loop in C++, you need to use `auto&&` instead of `const auto &`.

To fix this issue, first we should convert the vector into a string using `std::accumulate()`. We also need to replace the range-based for with standard one because C++ doesn't support ranged based loop on non-aggregate types. 

Here is the corrected code:
```cpp
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm> // for std::accumulate()

int main() {
  std::string s1 = "hello";
  std::cout << s1 + " world" << std::endl;

  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl;

  std::vector<std::string> vec = {"world", "mom"}; // vector initialization fixed
  std::ostringstream os;
  for (const auto &str : vec) {
    os << "," << str;
  }

  std::cout << "\"" + os.str()[1:] + "\""; // Output: hello,world,mom

  std::string s3 = ", ";
  for (const auto &str : vec) {
    s3 += str;
  }
  std::cout << s3 << std::endl;

  return 0;
}
```
In this code, `vec` is initialized with the values `"world"` and `"mom"`, instead of `s1`. We use a standard for loop to iterate over the elements of `vec`, concatenating each string to `os`, then print that to cout. In the second block of output statements, we manually concatenate each string in `vec` to form `s3`, and also print it out.
