 Sure, here's the equivalent code in C++ demonstrating the same functionality:

```cpp
#include <iostream>
#include <string>
#include <cctype> // for tolower()

void compare(const std::string& A, const std::string& B) {
    if (A == B)
        std::cout << "'" << A << "' and '" << B << "' are lexically equal." << std::endl;
    else
        std::cout << "'" << A << "' and '" << B << "' are not lexically equal." << std::endl;

    if (A.size() == B.size()) {
        bool caseSensitiveEqual = true, caseInsensitiveEqual = true;
        for (size_t i = 0; i < A.size(); ++i) {
            if (std::tolower(A[i]) != std::tolower(B[i])) caseInsensitiveEqual = false;
            if (A[i] != B[i]) caseSensitiveEqual = false;
        }
        if (caseInsensitiveEqual)
            std::cout << "'" << A << "' and '" << B << "' are case-insensitive lexically equal." << std::endl;
        else
            std::cout << "'" << A << "' and '" << B << "' are not case-insensitive lexically equal." << std::endl;
    } else {
        std::cout << "'" << A << "' and '" << B << "' are not case-insensitive lexically equal due to different lengths." << std::endl;
    }

    if (A < B)
        std::cout << "'" << A << "' is lexically before '" << B << "'." << std::endl;
    else if (A > B)
        std::cout << "'" << A << "' is lexically after '" << B << "'." << std::endl;
    else {
        std::cout << "'" << A << "' is not lexically before '" << B << "." << std::endl;
        std::cout << "'" << A << "' is not lexically after '" << B << "." << std::endl;
    }

    int lexicalComparison = A.compare(B);
    if (lexicalComparison < 0)
        std::cout << "'" << A << "' is lexically before '" << B << '.' << std::endl;
    else if (lexicalComparison > 0)
        std::cout << "'" << A << "' is lexically after '" << B << '.' << std::endl;
    else
        std::cout << "'" << A << "' and '" << B << "' are lexically equal." << std::endl;

    int caseInsensitiveComparison = A.compare(0, A.size(), B, 0, B.size());
    if (caseInsensitiveComparison < 0)
        std::cout << "'" << A << "' is lexically before '" << B << '.' << std::endl;
    else if (caseInsensitiveComparison > 0)
        std::cout << "'" << A << "' is lexically after '" << B << '.' << std::endl;
    else
        std::cout << "'" << A << "' and '" << B << "' are lexically equal." << std::endl;
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

### Explanation:
1. **Comparing two strings for exact equality**: Uses the `==` operator in C++.
2. **Comparing two strings for inequality**: Uses the `!=` operator in C++.
3. **Comparing two strings to see if one is lexically ordered before than the other**: Uses the `<`, `<=`, `>`, and `>=` operators in C++.
4. **Case sensitive comparisons**: Directly compares the strings using the `==` or relational operators.
5. **Case insensitive comparisons**: Converts both strings to lowercase (or uppercase) and then compares them using the `==` or relational operators after conversion.
6. **Comparing numeric strings**: If treated lexically, they are compared as strings; if not treated lexically, they can be converted to numbers for comparison. The provided example treats all strings lexically unless explicitly mentioned otherwise.
7. **Other kinds of string comparisons**: The `compare` method in C++ provides a way to compare substrings or the entire strings lexicographically. It also supports case-insensitive comparison by specifying the length of the substring to be compared.
