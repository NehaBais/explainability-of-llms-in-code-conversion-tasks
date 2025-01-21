 Certainly! Below is the equivalent code in C++ that performs string interpolation as described:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string adjective = "little";
    std::string lyric = "Mary had a %s lamb";
    std::string result = "";

    // Perform the substitution using sprintf for simplicity
    char buffer[100];
    sprintf(buffer, lyric.c_str(), adjective.c_str());
    result = std::string(buffer);

    std::cout << result << std::endl;
    return 0;
}
```

In this C++ code:
- We define a variable `adjective` with the value "little".
- We use the `sprintf` function to format the string `lyric` by replacing the placeholder `%s` with the value of `adjective`.
- The formatted string is then stored in `result` and printed to the console.
