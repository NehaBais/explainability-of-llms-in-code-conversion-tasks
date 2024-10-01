The equivalent code in C++ is as follows:
```c++
#include <iostream>
#include <string>

int main() {
    std::string adjective = "little";
    std::string lyric = std::string("Mary had a %s lamb") % adjective;
    std::cout << lyric << '\n'; // Mary had a little lamb

    return 0;
}
```
In this code, we have included the necessary libraries to use `std::string` and `std::cout`. The `%` operator in C++ is used for string interpolation. The `%s` format specifier is used to indicate that the interpolated value is a string. We pass the `adjective` variable to the constructor of `std::string`, which replaces the `%s` with its corresponding value, and store it in the `lyric` variable. Finally, we print the `lyric` variable to output.
