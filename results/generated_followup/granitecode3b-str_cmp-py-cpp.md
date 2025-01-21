The error is that the compiler cannot find the files `iostream`, `typeinfo`, and `string`. The first two are part of the standard library, so they must be included in the code using the `#include` directive. The third is a user-defined type, so it must also be defined before it is used.
The fix is to add the necessary headers to the code:
```cpp
#include 
#include 
#include 
using namespace std;
int main() {
  string a = "YUP";
  string b = "YUP";
  cout << a << " is of type " << typeid(a).name() << endl;
  cout << b << " is of type " << typeid(b).name() << endl;
  if (a < b) {
    cout << a << " is strictly less than  " << b << endl;
  }
  if (a <= b) {
    cout << a << " is less than or equal to " << b << endl;
  }
  if (a > b) {
    cout << a << " is strictly greater than  " << b << endl;
  }
  if (a >= b) {
    cout << a << " is greater than or equal to " << b << endl;
  }
  if (a == b) {
    cout << a << " is equal to " << b << endl;
  }
}
```
This code defines the `string` type, creates two instances of it, and then uses comparison operators (`<`, `<=`, `>`, `>=`, `==`) to compare them. The output will be a series of statements indicating which comparisons are true or false.

