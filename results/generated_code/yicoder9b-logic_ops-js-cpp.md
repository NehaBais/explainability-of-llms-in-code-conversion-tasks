Here is the C++ version of your JavaScript code. In this C++ version, we will use `cout` for printing results instead of `console.log()` function used in JavaScript.

```cpp
#include <iostream>
using namespace std;

void logic(bool a, bool b) {
  cout << "a AND b: " << (a && b) << endl;
  cout << "a OR b: " << (a || b) << endl;
  cout << "NOT a: " << !a << endl;
}
```

Note that boolean values in C++ are represented as `true` and `false` instead of `1` and `0` used in JavaScript.
Also remember to call this function with two boolean arguments like so - `logic(true, false);`
