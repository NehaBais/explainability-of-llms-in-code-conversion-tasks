Here's the C++ code that performs the same functionality as the given JavaScript function:
```
#include 
using namespace std;
void logic(bool a, bool b) {
  cout << "a AND b: " << (a && b) << endl;
  cout << "a OR b: " << (a || b) << endl;
  cout << "NOT a: " << (!a) << endl;
}
int main() {
  logic(true, true); // Output: a AND b: 1, a OR b: 1, NOT a: 0
  logic(false, false); // Output: a AND b: 0, a OR b: 0, NOT a: 1
  return 0;
}
```
Note that in C++, the `&&` and `||` operators have lower precedence than the logical NOT operator (`!`). This means that the expression `(a && b)` will first evaluate `a`, and then apply the `&&` operator to the result of that evaluation and `b`. Similarly, the expression `(a || b)` will first evaluate `a`, and then apply the `||` operator to the result of that evaluation and `b`.

