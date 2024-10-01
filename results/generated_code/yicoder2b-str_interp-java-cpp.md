Sure, here is how you can convert this code to C++:

```cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string adjective = "little";
    string lyrics = string("Mary had a ") + adjective + string(" lamb");
    cout << lyrics;
    return 0;
}
```

In this C++ version, we are using the `std::string` class for strings. Also note that to concatenate two `std::string` objects we use the `+` operator, instead of the `String.format()` method from Java. `std::cout` is used to print the output string.
