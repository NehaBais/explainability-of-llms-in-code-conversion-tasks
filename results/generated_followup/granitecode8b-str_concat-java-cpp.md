The error message indicates that the compiler is unable to find the required header files for string and cout. 

Here is the corrected code:
```cpp
#include 
#include 
using namespace std;
int main() {
  string s = "hello";
  cout << s + " literal" << endl;
  string s2 = s + " literal";
  cout << s2 << endl;
  return 0;
}
```

