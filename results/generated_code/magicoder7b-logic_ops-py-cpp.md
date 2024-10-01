 In C++, you can use the `&&` operator for logical AND (equivalent to Python's `and`), the `||` operator for logical OR (equivalent to Python's `or`) and the `!` operator for logical NOT (equivalent to Python's `not`). Here is the equivalent code:

```cpp
#include <iostream>
using namespace std;

void logic(bool a, bool b) {
    cout << "a and b: " << (a && b) << endl;
    cout << "a or b: " << (a || b) << endl;
    cout << "not a: " << !a << endl;
}
```
This function takes two boolean values (`bool` data type in C++) and outputs the result of "and" and "or" on both arguments as well as "not" on the first argument. Note that `<<` operator is used to output variables or results, notably different from Python's print statement.
