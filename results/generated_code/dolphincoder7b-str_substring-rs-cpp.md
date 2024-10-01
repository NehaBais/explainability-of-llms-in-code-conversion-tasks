The Rust code uses the `std::str` module, and it directly works with UTF-8 or UTF-16 characters. 
It does not require the user to specify the encoding (as required in C++). 

In C++, you can implement a similar functionality using iterators over a string: `std::string::iterator`. Here is an example of how you would implement substring manipulation in C++.

```cpp
#include <iostream>
#include <string>
#include <algorithm>

void print_n(const std::string& str, size_t n) {
    auto it = str.begin();
    while (n-- > 0 && it != str.end()) ++it;
    for (; it != str.end(); ++it)
        std::cout << *it;
    std::cout << '\n';
}

void print_m(const std::string& str, size_t m) {
    auto it = std::next(str.begin(), m);
    for ( ; it != str.end(); ++it)
        std::cout << *it;
    std::cout << '\n';
}

void print_from_n(const std::string& str, size_t n) {
    auto it = std::next(str.begin(), n);
    for ( ; it != str.end(); ++it)
        std::cout << *it;
    std::cout << '\n';
}

void print_all_except_last(const std::string& str) {
    if (!str.empty()) {
        auto it = --str.end();
        for ( ; it != str.begin(); --it)
            std::cout << *it;
        std::cout << '\n';
    }
}

int main() {
    std::string s = "abc文字化けdef";

    // Print 3 characters starting at index 2 (c文字)
    print_m(s, 2);

    // Print all characters starting at index 2 (c文字化けdef)
    print_from_n(s, 2);

    // Print all characters except the last (abc文字化けde)
    print_all_except_last(s);

    // Print 3 characters starting with 'b' (bc文)
    size_t cpos = s.find('b');
    if (cpos != std::string::npos)
        print_m(s, cpos + 1);

    // Print 3 characters starting with "けd" (けde)
    size_t spos = s.find("けd");
    if (spos != std::string::npos)
        print_m(s, spos + 2);
}
```
