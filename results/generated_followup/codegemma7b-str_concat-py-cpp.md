The error occurs because the `join` function is not a native C++ function. In C++, you need to use the `std::string::join` method instead.

```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s1 = "hello";
  cout << s1 + " world" << endl;

  string s2 = s1 + " world";
  cout << s2 << endl;

  s1 = "hello";
  cout << join(",", vector<string>({s1, "world", "mom"})) << endl;

  s2 = join(",", vector<string>({s1, "world", "mom"}));
  cout << s2 << endl;

  return 0;
}
```
