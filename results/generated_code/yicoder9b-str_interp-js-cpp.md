In C++, strings are mutable and you can directly replace characters within them unlike in JavaScript where strings are immutable and require a method to replace characters. Here's how you could do it:

```cpp
#include <iostream>
#include <string>  // For std::string

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "little";

    size_t pos = 0;

    while ((pos = original.find("X", pos)) != std::string::npos) {  // loop to replace all instances of 'X' in the string
        original.replace(pos, 1, little);
        ++pos;
    }

    std::cout << original << std::endl;  // prints: "Mary had a little lamb"

    return 0;
}
```
