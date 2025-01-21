The error message indicates that the program is trying to dereference pointers to the std::string class, which is invalid because std::string isn't a pointer type. Therefore, we need to change our variable declaration from `std::string` to `&str`. 

After making this correction and modifying the code accordingly (including changing the comparison operators), the corrected C++ code is as follows:

```cpp
#include  <algorithm>
#include  <iostream>
#include  <string>

int main() {
    const char *a = "abc";
    std::string b("Bac");

    if (a == b) {
        std::cout << "The strings are equal\n";
    } else if (a != b) {
        std::cout << "The strings are not equal\n";
    } else if (*a > *b)  // lexicographic order comparison
        std::cout << "The first string is lexically after the second\n";
    else if (*a < *b)
        std::cout << "The first string is lexically before the second\n";

    // case-insensitives:
    // equality
    // this avoids new allocations
    if (std::equal(a.begin(), a.end(), b.begin(), b.end(),
                  [](char a, char b) { return tolower(a) == tolower(b);  })) {
        std::cout << "Both strings are equal when ignoring case\n";
    }

    // everything else, create owned Strings, then compare as above
    std::string a2 = a;
    std::transform(a2.begin(), a2.end(), a2.begin(),
                  ::toupper);  // convert to upper case
    std::string b2 = b;
    std::transform(b2.begin(), b2.end(), b2.begin(), ::toupper);

    if (a2 == b2) {
        std::cout << "Both strings are equal when ignoring case\n";
    } else if (a2 > b2)  // lexicographic order comparison
        std::cout << "The first string is lexically after the second\n";
    else if (a2 < b2)
        std::cout << "The first string is lexically before the second\n";
}
```
