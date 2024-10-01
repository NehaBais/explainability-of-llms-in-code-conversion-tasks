Below is the equivalent C++ code for the provided Python code. 

This C++ function takes two boolean inputs, performs 'and' and 'or' operations along with 'not' operation on the first argument as per your requirement.

```cpp
#include <iostream>
using namespace std;

void logic(bool a, bool b) {
    cout << "a and b: " << (a && b) << endl;
    cout << "a or b: " << (a || b) << endl;
    cout << "not a: " << (!a) << endl;
}
```
You can call this function with two boolean values like below,

logic(true, false);

It will print the result of 'and', 'or' and 'not' operations on provided arguments.
