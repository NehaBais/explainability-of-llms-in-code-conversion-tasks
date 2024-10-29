The equivalent C++ code would be as follows:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "foo";
    s += "bar";
    cout << s << endl;  // Outputs: foobar
    return 0;
}
```

In C++, we can directly concatenate strings using the `+=` operator. It is important to note that in this case there isn't a need for any specific library like "strings" in Golang. The string class from standard library of C++ provides all necessary methods.

