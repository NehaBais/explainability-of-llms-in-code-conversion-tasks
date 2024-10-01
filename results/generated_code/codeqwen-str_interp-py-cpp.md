The equivalent C++ code for the given Python code would be as follows:

```cpp
#include<iostream>
using namespace std;

int main() {
    string extra = "little";
    string new_str = "Mary had a " + extra + " lamb.";
    cout << new_str << endl;
    return 0;
}
```

This C++ code performs the same task as the Python code. The string variable `extra` is assigned with the value `"little"` and then, it's appended to the string `new_str` using the `+` operator. Finally, this string is outputted via `cout`.
