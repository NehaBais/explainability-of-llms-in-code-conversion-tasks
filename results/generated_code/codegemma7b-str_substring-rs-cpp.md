```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string s = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2 (c文字)
  string sub1 = s.substr(n, m);
  cout << sub1 << endl;

  // Print all characters starting at index 2 (c文字化けdef)
  string sub2 = s.substr(n);
  cout << sub2 << endl;

  // Print all characters except the last (abc文字化けde)
  string sub3 = s.substr(0, s.size() - 1);
  cout << sub3 << endl;

  // Print 3 characters starting with 'b' (bc文)
  int cpos = s.find('b');
  string sub4 = s.substr(cpos, m);
  cout << sub4 << endl;

  // Print 3 characters starting with "けd" (けde)
  int spos = s.find("けd");
  string sub5 = s.substr(spos, m);
  cout << sub5 << endl;

  return 0;
}
```
