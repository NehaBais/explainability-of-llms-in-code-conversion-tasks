In C++, the function would look like this:

```C++
#include <iostream>
using namespace std;

void logic(bool a, bool b) {
    cout << "a AND b: " << (a && b) << endl;
    cout << "a OR b: " << (a || b) << endl;
    cout << "NOT a: " << !a << endl;
}
```
This C++ code does the exact same thing as your Java function. It takes in two boolean values `a` and `b`, performs the logical operations AND, OR, and NOT on them, and outputs the result to the console using cout. Note that we use `endl` at the end of each print statement because it is more efficient than concatenation (`+`) for strings in C++, especially when writing directly to an output stream like stdout.

