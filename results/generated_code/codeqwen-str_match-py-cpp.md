Here is a simple conversion of the Python code to C++.

Python Code:

def string_match(str1, str2):
    # Determining if the first string starts with second string
    if str1.startswith(str2):
        print('String 1 starts with String 2')
    else:
        print('String 1 does not start with String 2')

    # Determining if the first string contains the second string at any location
    if str2 in str1:
        print('String 1 contains String 2')
    else:
        print('String 1 does not contain String 2')

    # Determining if the first string ends with the second string
    if str1.endswith(str2):
        print('String 1 ends with String 2')
    else:
        print('String 1 does not end with String 2')

C++ Code:
```cpp
#include <iostream>
#include <string>

void string_match(std::string str1, std::string str2) {
    // Determining if the first string starts with second string
    if (str1.find(str2) == 0) {
        std::cout << "String 1 starts with String 2\n";
    } else {
        std::cout << "String 1 does not start with String 2\n";
    }

    // Determining if the first string contains the second string at any location
    if (str1.find(str2) != std::string::npos) {
        std::cout << "String 1 contains String 2\n";
    } else {
        std::cout << "String 1 does not contain String 2\n";
    }

    // Determining if the first string ends with the second string
    if (str1.rfind(str2) == str1.size() - str2.size()) {
        std::cout << "String 1 ends with String 2\n";
    } else {
        std::cout << "String 1 does not end with String 2\n";
    }
}

int main() {
    string_match("abcd", "ab");  // returns True
    string_match("abcd", "zn");  // returns False
    string_match("bb", "abab"); // returns False
    string_match("ab", "abab"); // returns True

    return 0;
}
```

The C++ code uses the `find()` and `rfind()` functions from the string class, which is a part of the Standard Template Library (STL). The `find()` function searches for the first occurrence of an element in a container (in this case, a string), while `rfind()` finds the last.

In both cases, if the return value of these functions is 0, it means that the given substring is found at the start or end of the string; and if the return value is not 0, it means that it is not found.

Also note that `std::string::npos` is a constant representing the maximum possible size_t value. In our case, we are using it to check if `str1.find(str2)` is not equal to `std::string::npos`, which would indicate that str2 was found within str1.
