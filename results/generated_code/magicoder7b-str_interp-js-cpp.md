 The JavaScript code you provided can be converted to C++ as follows:

```cpp
#include <string>
#include <iostream>

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "little";
    
    // The function replace() is not available in C++, but the function 
    // 'replace' of string in standard library can be used instead.
    std::string replaced = original;
    replaced.replace(original.find("X"), 1, little);
    
    std::cout << "Original: \"" << original << "\"\n";
    std::cout << "Replaced: \"" << replaced << "\"\n";

    return 0;
}
```
Please note that in C++, the `std::string` replace function needs to know the start and end positions of what you want to replace, whereas in JavaScript, it finds all occurrences. Therefore, I used `original.find("X")` which returns the position of the first occurrence of "X", and then I use it as a starting index for replacement. The second argument is the length of the string to be replaced (since we're replacing one character).
