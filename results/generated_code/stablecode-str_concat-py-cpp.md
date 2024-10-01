Here is the equivalent C++ code:

```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    // Create a string variable equal to any text value.
    string s1 = "hello";

    // Create another string variable whose value is the original variable concatenated with another string literal.
    string s2 = s1 + " world";

    // To illustrate the operation, show the content of the variables.
    cout << s1 << endl;
    cout << s2 << endl;

    s1 = "hello";
    vector<string> str_vec = {s1, "world", "mom"};
    string s3 = ", ".join(str_vec);
    cout << s3 << endl;

    return 0;
}
```

In this code:

- Strings are created and manipulated using the `std::string` class.
- The `join` function is used to concatenate a vector of strings with a specified delimiter.
- The variables `s1`, `s2`, `s3` are used to store string values, which are then printed to the console.
