Below is the C++ code that accomplishes the same functionality:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s("abcdefgh");
    int n, m, indx;
    char char1 = 'd';
    std::string chars1 = "cd";

    n = 2;
    m = 3;

    // starting from n=2 characters in and m=3 in length
    std::cout << s.substr(n-1, m) << std::endl;

    // starting from n characters in, up to the end of the string
    std::cout << s.substr(n-1) << std::endl;

    // whole string minus last character
    std::cout << s.substr(0, s.size() - 1) << std::endl;

    // starting from a known character char="d" within the string and of m length
    indx = s.find(char1);
    if(indx != std::string::npos) {
        std::cout << s.substr(indx, m) << std::endl;
    } else {
        std::cout << "Character not found!" << std::endl;
    }

    // starting from a known substring chars="cd" within the string and of m length
    indx = s.find(chars1);
    if(indx != std::string::npos) {
        std::cout << s.substr(indx, m) << std::endl;
    } else {
        std::cout << "Substring not found!" << std::endl;
    }

    return 0;
}
```

This program uses the C++ Standard Library `std::string` for string manipulation. It first defines a string and several parameters: `n`, `m`, `char1`, and `chars1`. Then, it prints out the substrings as described in the question using the `substr` method of the `std::string` class. The `find` method is used to find a substring within the string, which returns the starting position of the found character or the first occurrence of the found substring, if not found it returns `std::string::npos`.
