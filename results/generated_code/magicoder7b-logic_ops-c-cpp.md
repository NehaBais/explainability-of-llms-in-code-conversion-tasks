 The C code provided is already in C++ syntax. There is no specific need to convert it as it's already valid C++. However, the function `printf` uses `\n` instead of `"\n"` because in C we don't have escape sequences for new lines so `"\n"` won't work.

Here is your code with small modifications:

```cpp
#include <iostream>
using namespace std;

void print_logic(int a, int b) {
    cout << "a and b is " << (a && b) << endl;
    cout << "a or b is " << (a || b) << endl;
    cout << "not a is " << (!a) << endl;
}
```
This C++ code does exactly the same as your original C function, it just uses `cout` to print the result on console.
