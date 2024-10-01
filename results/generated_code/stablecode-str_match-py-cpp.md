Below is the equivalent C++ code for the provided Python code. This implementation assumes that all strings are non-empty and only contain alphanumeric characters (i.e., a-z, A-Z, 0-9).

```cpp
#include <iostream>
#include <string>

bool starts_with(const std::string& s1, const std::string& s2) {
    if (s1.length() >= s2.length()) {
        return s1.substr(0, s2.length())) == s2;
    } else {
        return false;
    }
}

bool contains(const std::string& s1, const std::string& s2) {
    if (s1.length() >= s2.length()) {
        for (size_t i = 0; i < s1.length() - s2.length() + 1; ++i) {
            if (s1.substr(i, s2.length())) == s2) {
                return true;
            }
        }
    } else {
        return false;
    }
}

bool ends_with(const std::string& s1, const std::string& s2) {
    if (s1.length() >= s2.length())) {
        return s1.substr(s1.length() - s2.length())) == s2;
    } else {
        return false;
    }
}

int main() {
    std::string str = "abcd";
    std::string s1 = "ab";
    std::string s2 = "bb";

    std::cout << std::boolalpha;
    std::cout << starts_with(str, s1)) << std::endl;
    std::cout << ends_with(str, s2))) << std::endl;
    std::cout << contains(str, s2))) << std::endl;

    return 0;
}
```

This C++ code provides the same functionality as the given Python code. The `starts_with`, `ends_with`, and `contains` functions check if the first string starts with the second string, if the first string ends with the second string, and if the first string contains the second string at any location, respectively. The `main` function demonstrates these three types of string matching for the given example strings.
