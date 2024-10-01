Here's how you can accomplish this in C++:

```cpp
#include <iostream>
#include <string> 

int main() {
    std::string str = "def";
    str = "abc" + str;

    return 0;
}
```

In the above code, `std::string` is used to define a string variable. The operator `+` is used to concatenate (prepend) strings in C++.
