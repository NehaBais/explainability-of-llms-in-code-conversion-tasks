 The C++ language does not have a built-in function like `equals()` or `compareTo()` in Java to compare strings, because it's more flexible. In C++, you can use the relational operators (`==`, `!=`, `<`, `<=`, `>`, and `>=`) directly with strings.

Here is how you could write your Java code in C++:

```cpp
#include <iostream>
#include <string>

void compare(const std::string& A, const std::string& B) {
    if (A == B)
        std::cout << "' " << A << " ' and ' " << B <<" ' are lexically equal." << std::endl;
    else
        std::cout << "' " << A << " ' and ' " << B << " ' are not lexically equal." << std::endl;
        
    if (A.compare(0, A.size(), B) == 0 || A.compare(0, A.size(), B, 0, B.size()) == 0)
        std::cout << "' " << A << " ' is lexically before ' " << B <<" '." << std::endl;
    else if (A.compare(0, A.size(), B) > 0 || A.compare(0, A.size(), B, 0, B.size()) < 0)
        std::cout << "' " << A << " ' is lexically after ' " << B <<" '." << std::endl;
        
    if (A.compare(0, A.size(), B) >= 0 || A.compare(0, A.size(), B, 0, B.size()) <= 0)
        std::cout << "' " << A << " ' is not lexically before ' " << B <<" '." << std::endl;
    if (A.compare(0, A.size(), B) <= 0 || A.compare(0, A.size(), B, 0, B.size()) >= 0)
        std::cout << "' " << A << " ' is not lexically after ' " << B <<" '." << std::endl;
        
    int result = A.compare(B);
    if (result < 0) {
        std::cout << "' '" << A << "' ' is lexically before ' '" << B << "' '." << std::endl;
    } else if (result > 0) {
        std::cout << "' '" << A << "' ' is lexically after ' '" << B << "' '." << std::endl;
    } else {
        std::cout << "' '" << A << "' ' and ' '" << B << "' ' are lexically equal.'" << std::endl;
    }
}

int main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
    return 0;
}
```
Please note that the `compareToIgnoreCase` functionality is missing as C++ doesn't provide an easy way to do case-insensitive string comparison like in Java. If you need this, you would typically convert both strings to a common case (like uppercase or lowercase) before comparing them.
