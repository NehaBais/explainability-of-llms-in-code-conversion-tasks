 In C++, you can use the `+=` operator to concatenate two strings together, and then print out that result. Here's how to convert your Java code:

```cpp
#include <iostream>
using namespace std;

int main() {
    string str = "abc";
    cout << str << endl;
    str += "def";
    cout << str << endl;
    return 0;
}
```
This code accomplishes the same task as your Java version. It initializes a `std::string` variable with the value `"abc"`, then prints it out. After that, it appends the string `"def"` to our original string and prints out the result.
