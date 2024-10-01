Here is how you can convert this Java code to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string adjective = "little";
    std::string lyric;

    lyric = std::string("Mary had a ") + adjective + " lamb.";

    std::cout << lyric << std::endl;

    return 0;
}
```
This C++ code does the same thing as your given Java code. It first initializes the string `adjective` with the value "little". Then it constructs the string `lyric` by concatenating several strings and the variable `adjective`. Finally, it prints out the string `lyric`.
