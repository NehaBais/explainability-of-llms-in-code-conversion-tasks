This code in Python can be converted to C++ as follows:

```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string extra = "little";
    string new_str = "Mary had a " + extra + " lamb.";
    cout << new_str << endl;
    return 0;
}
```
The key differences between the two codes are:
1. In Python, we use the format() method to perform string interpolation, while in C++, we concatenate strings using the + operator.
2. In Python, we define variables and values separately, while in C++, they are defined together as part of a single string literal.
3. Finally, the code in Python uses print() to output the result, whereas in C++ we use cout to output the result and endl to output the newline character at the end.
