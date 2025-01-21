The error is due to using `std::strdup()` function which was not part of standard C++ until C++17. C++ does not have an inbuilt method for string duplication, you need to use a third-party library or write your own custom function.

The fix would be either using the older `strdup` without namespace `std::`.

Or use the C++ feature to concat strings without duplication like this -

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "my String";
  const char *cstr = "Changed "; 
  str = string(cstr) + str;
  cout << str << endl; 
  return 0;
}
```
