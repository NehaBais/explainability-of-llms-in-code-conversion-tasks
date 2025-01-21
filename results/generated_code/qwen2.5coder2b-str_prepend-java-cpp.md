Sure, here's how you can convert the given Java code snippet into C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a string variable with some text value
    string string = "def";

    // Prepend another string literal to the existing string using '+' operator
    string = "abc" + string;

    cout << "Modified string: " << string << endl;
    return 0;
}
```

In this C++ code, we first include the `iostream` library. Then, in the `main` function, we declare a string variable named `string` and initialize it with the value `"def"`. Next, we use the `+=` operator to prepend the string literal `"abc"` to the existing `string`. Finally, we print out the modified string using `cout`.
