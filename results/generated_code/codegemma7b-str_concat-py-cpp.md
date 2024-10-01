```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1 = "hello";
  cout << s1 + " world" << endl;

  string s2 = s1 + " world";
  cout << s2 << endl;

  s1 = "hello";
  cout << join(",", {s1, "world", "mom"}) << endl;

  s2 = join(",", {s1, "world", "mom"});
  cout << s2 << endl;

  return 0;
}
```
