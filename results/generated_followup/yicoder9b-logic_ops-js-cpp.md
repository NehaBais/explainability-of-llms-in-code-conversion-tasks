The error "Undefined symbols for architecture arm64" is caused by not having a `main()` function present in the program, which is the entry point of every C++ program.

To fix this issue, we need to add a `main()` function where our code will begin execution. Here's how you can do it:

```cpp
#include <iostream>
using namespace std;

void logic(bool a, bool b) {
  cout << "a AND b: " << (a && b) << endl;
  cout << "a OR b: " << (a || b) << endl;
  cout << "NOT a: " << !a << endl;
}

int main() {
  logic(true, false); // call the logic function with boolean arguments.
  return 0; 
}
```
