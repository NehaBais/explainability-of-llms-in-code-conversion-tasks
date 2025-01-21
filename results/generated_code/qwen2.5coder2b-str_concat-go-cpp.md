Sure, here is the equivalent C++ code:

```cpp
#include <iostream>
using namespace std;

int main() {
    // string variable equal to any text value
    string s = "hello";

    // output string variable
    cout << s << endl;

    // this output requested by original task descrption, although
    // not really required by current wording of task description.
    cout << s + " literal" << endl;

    // concatenate variable and literal, assign result to another string variable
    string s2 = s + " literal";

    // output second string variable
    cout << s2 << endl;
    
    return 0;
}
```

This code creates a string named `s` with the value `"hello"`. It then prints the content of this string using `cout`. The line `cout << s + " literal";` concatenates the string `s` and `" literal"` into `s2`, which is printed to the console as well.
