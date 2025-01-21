The error was due to missing header files for string manipulation functions in C++. The fix was to add `#include  and `#include `. After adding these headers, the corrected code is as follows:
```cpp
#include 
#include 
using namespace std;
string sconcat(const string &s1, const string &s2) {
  string s0 = s1 + s2;
  return s0;
}
int main() {
  const string s = "hello";
  string s2;

  cout << s << " literal" << endl;
  /* or */
  cout << s << " literal" << endl;

  s2 = sconcat(s, " literal");
  cout << s2 << endl;
  return 0;
}
```

