Error:
- The C++ compiler is unable to find the `std` namespace, which is used by `string`. To fix this error, we need to add `#include <iostream>` at the top of the file.
- The C++ compiler is also unable to find the type name `string`, which is used in the function and variable declarations. To fix this error, we need to include the `<string>` header file at the top of the file.

Rewritten Code:
```cpp
#include <iostream>
#include <string>
using namespace std;

string sconcat(string s1, string s2) { return s1 + s2; }

int main() {
  string s = "hello";
  string s2 = sconcat(s, " literal");
  cout << s << endl;  // prints "hello" literal
  cout << s2 << endl; // prints "hello literal"
  return 0;
}
```

