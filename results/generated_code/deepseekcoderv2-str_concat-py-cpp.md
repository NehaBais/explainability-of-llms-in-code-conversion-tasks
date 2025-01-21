 Here's the equivalent code in C++ that performs the same operations as your Python code:

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    std::string s1 = "hello";
    std::cout << s1 + " world" << std::endl;

    std::string s2 = s1 + " world";
    std::cout << s2 << std::endl;

    std::vector<std::string> words = {s1, "world", "mom"};
    std::ostringstream oss;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i != 0) {
            oss << ", ";
        }
        oss << words[i];
    }
    std::cout << oss.str() << std::endl;

    s2 = "";
    for (size_t i = 0; i < words.size(); ++i) {
        if (!s2.empty()) {
            s2 += ", ";
        }
        s2 += words[i];
    }
    std::cout << s2 << std::endl;

    return 0;
}
```

This C++ code performs the same operations as your Python code:
1. It creates a string variable `s1` and concatenates it with " world".
2. It prints the concatenated result.
3. It then creates another string variable `s2` by concatenating `s1` with " world" and prints it.
4. Finally, it uses a vector to store multiple strings and joins them together using a comma and space, printing the result.
