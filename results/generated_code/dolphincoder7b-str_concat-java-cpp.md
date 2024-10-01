This is how you can convert the given Java code to C++.

```cpp
#include <iostream>
using namespace std;
int main() {
  string s = "hello";
  cout << s + " literal" << endl;
  string s2 = s + " literal";
  cout << s2 << endl;
  return 0;
}
```
The variable `s` is created with the value "hello". It's printed out with a concatenated string literal. Then, `s2`, which holds the concatenation of `s` and the string literal " literal", is also created. Finally, `s2` is printed out.
