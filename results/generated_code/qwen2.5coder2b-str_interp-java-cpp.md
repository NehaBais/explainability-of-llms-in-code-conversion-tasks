Sure! Below is the equivalent code snippet from Java to C++. In this case, we will use `std::string` and `printf` function for string interpolation. Here's how you can do it:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string adjective = "little";
    std::string lyric = "Mary had a " + adjective + " lamb";

    // Alternatively, using printf for formatting the string
    // printf("Mary had a %s lamb\n", adjective.c_str());

    std::cout << lyric << std::endl;

    return 0;
}
```

In this C++ code:
- We define two `std::string` variables: `adjective` and `lyric`.
- The `lyric` string is created using the `+` operator to concatenate "Mary had a " with `adjective`.
- Alternatively, you can use `printf` function with `%s` specifier and convert the string to C-style string using `c_str()` method.
- Finally, we print the resulting `lyric` string.
