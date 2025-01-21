Here is a C++ version of your JavaScript code:

```c++
#include <iostream>
using namespace std;

int bitwise(int a, int b) {
    cout << "a AND b: " << (a & b) << endl;
    cout << "a OR b: " << (a | b) << endl;
    cout << "a XOR b: " << (a ^ b) << endl;
    cout << "NOT a: " << (~a) << endl;
    cout << "a << b: " << (a << b) << endl; // left shift
    cout << "a >> b: " << (a >> b) << endl; // arithmetic right shift
    cout << "a >>> b: " << (unsigned int)a >> b) << endl; // logical right shift

    return 0;
}
```

In this code, the `bitwise()` function takes two integer arguments. It performs bitwise operations and prints their results. Note that C++ uses logical right shift for `a >>> b` operation because it does not have a direct equivalent to JavaScript's arithmetic right shift operator (`>>`). Instead, you can do an unsigned right shift first and then cast it back to signed if needed.

Please replace your existing code with this one in your program.
