Here is your Java code converted to C++:

In C++, you can use the `std::stringstream` class in combination with `std::string` objects for string interpolation (or concatenation). This approach works similarly to String.format():

```cpp
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string adjective = "big";
    
    // C++ string interpolation:
    std::string lyric = "Mary had a " + adjective + " lamb.";

    std::cout << lyric << std::endl;

    return 0;
}
```
In this code, we define `lyric` as the concatenated string of "Mary had a ", the value of `adjective` and ". This will give us the interpolation equivalent to your Java example. Finally, `std::cout << lyric` is used to print the resultant string on console.

