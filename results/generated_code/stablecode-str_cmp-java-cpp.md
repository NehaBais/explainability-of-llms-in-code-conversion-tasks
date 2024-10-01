Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <string>
#include <cctype>

bool areEqual(std::string A, std::string B) {
    return A == B;
}

bool areInverseEqual(std::string A, std::string B) {
    return !(A == B);
}

int lexicalComparison(std::string A, std::string B) {
    return A.compareTo(B);
}

int caseSensitiveLexicalComparison(std::string A, std::string B)) {
    return A.compare(B);
}

int main() {
    std::string str1 = "Hello";
    std::string str2 = "Hello";

    if (areEqual(str1, str2)))
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are lexically equal." << std::endl;
    else
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are not lexically equal." << std::endl;

    str1 = "5";
    str2 = "5.0";

    if (areEqual(str1, str2))))
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are lexically equal." << std::endl;
    else
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are not lexically equal." << std::endl;

    str1 = "java";
    str2 = "Java";

    if (areEqual(str1, str2))))
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are lexically equal." << std::endl;
    else
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are not lexically equal." << std::endl;

    str1 = "ĴÃVÁ";
    str2 = "ĴÃVÁ";

    if (areEqual(str1, str2))))
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are lexically equal." << std::endl;
    else
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are not lexically equal." << std::endl;

    str1 = "ĴÃVÁ";
    str2 = "ĵãvá";

    if (areEqual(str1, str2))))
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are lexically equal." << std::endl;
    else
        std::cout << "'" << str1 << "' and '" 
                             << str2 << "' are not lexically equal." << std::endl;

    int result = lexicalComparison(str1, str2));
    std::cout << "The lexical comparison of '" << str1 << "' and '" << str2 << "', the result is: " << result << std::endl;

    result = caseSensitiveLexicalComparison(str1, str2)));
    std::cout << "The case-sensitive lexical comparison of '" << str1 << "' and '" << str2 << "', the result is: " << result << std::endl;

    return 0;
}
```

This code demonstrates how to compare two strings in C++. It covers the following requirements:

1. Comparing two strings for exact equality using the `==` operator.

2. Comparing two strings for inequality by using the inverse of exact equality. This is done by negating the result of the `==` comparison.

3. Demonstrating a lexical comparison between two strings using the `compareTo()` method or the `strcmp()` function, depending on your string class implementation. The `compareTo()` method returns a negative value if the first argument is lexically less than the second argument; it returns zero if both arguments are equal; and it returns a positive value if the first argument is lexically greater than the second argument.

4. Demonstrating case-sensitive comparisons between two strings using the `compare()` method or the `strcmp()` function, depending on your string class implementation. The `compare()` method works like the `compareTo()` method, but it performs a case-sensitive comparison.

This code covers all the mentioned requirements and demonstrates how to compare two strings in C++.
