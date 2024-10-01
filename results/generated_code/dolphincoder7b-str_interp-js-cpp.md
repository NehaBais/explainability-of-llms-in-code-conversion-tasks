The equivalent code in C++ would look like this:
```cpp
#include <iostream>
#include <string>

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "little";

    // String replacement with 'replace' method in C++
    std::string replaced = original.replace(original.find("X"), 1, little);

    std::cout << "Original string: " << original << "\n";
    std::cout << "Replaced string: " << replaced << "\n";

    return 0;
}
```
This code uses the `std::string` class to manipulate strings and the `replace` method to replace a substring in a string with another. The original string is stored in the variable `original`, and we are searching for the character 'X' and replacing it with the word "little" to form the new string `replaced`. We then display the original and replaced strings, respectively.
