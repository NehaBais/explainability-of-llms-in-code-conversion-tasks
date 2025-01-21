The error in the converted C++ code is that it doesn't include the necessary header files for string interpolation and outputting to the console. The fix is to add `#include` statements for `iostream` and `fmt`. The corrected code is as follows:
```cpp
#include 
#include 
using namespace std;
int main() {
  string str = "Mary had a %s lamb";
  string txt = "little";
  string out = fmt.Sprintf(str, txt);
  cout << out << endl;
  return 0;
}
```
Note that `fmt` is not a standard library in C++, so we need to include the header file for string formatting functionality. Also, we need to use `cout` instead of `fmt.Println()` to output to the console.

