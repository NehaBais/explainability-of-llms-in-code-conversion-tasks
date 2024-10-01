Sure, the equivalent C++ code would be as follows. I'm going to use `std::cout` for output instead of printing directly to console in JavaScript function.

```cpp
#include <iostream>
using namespace std;

void logic(bool a, bool b) {
    // AND operation
    bool and_result = (a && b);
    cout << "a AND b: " << (and_result ? "true" : "false") << endl;
  
    // OR operation
    bool or_result = (a || b);
    cout << "a OR b: " << (or_result ? "true" : "false") << endl;
  
    // NOT operation
    bool not_a = !a;
    cout << "NOT a: " << (not_a ? "false" : "true") << endl;
}

int main() {
  logic(true, false); // test the function with some values.
  return 0;
}
```
