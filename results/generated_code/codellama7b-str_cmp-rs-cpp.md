
Here's the equivalent code in C++:
```
#include <iostream>
#include <string>

using namespace std;

int main() {
    string a = "abc";
    string b = "Bac";

    // comparing strings for exact equality
    if (a == b) {
        cout << "The strings are equal" << endl;
    } else {
        cout << "The strings are not equal" << endl;
    }

    // comparing strings for inequality (i.e., the inverse of exact equality)
    if (a != b) {
        cout << "The strings are not equal" << endl;
    } else {
        cout << "The strings are equal" << endl;
    }

    // comparing two strings to see if one is lexically ordered before the other
    if (a < b) {
        cout << "The first string is lexically before the second" << endl;
    } else {
        cout << "The first string is not lexically before the second" << endl;
    }

    // comparing two strings to see if one is lexically ordered after the other
    if (a > b) {
        cout << "The first string is lexically after the second" << endl;
    } else {
        cout << "The first string is not lexically after the second" << endl;
    }

    // comparing two strings to see if one is lexically ordered before or equal to the other
    if (a <= b) {
        cout << "The first string is lexically before or equal to the second" << endl;
    } else {
        cout << "The first string is not lexically before or equal to the second" << endl;
    }

    // comparing two strings to see if one is lexically ordered after or equal to the other
    if (a >= b) {
        cout << "The first string is lexically after or equal to the second" << endl;
    } else {
        cout << "The first string is not lexically after or equal to the second" << endl;
    }

    // case-insensitives:

    // equality
    if (a.compare(b) == 0) {
        cout << "Both strings are equal when ignoring case" << endl;
    } else {
        cout << "The strings are not equal when ignoring case" << endl;
    }

    // everything else, create owned Strings, then compare as above
    string a2 = a.to_upper();
    string b2 = b.to_upper();

    // repeat checks
}
```
Note that in C++, the `std::string` class provides methods for comparing strings, such as `compare`, `operator==`, and `operator!=`. These methods can be used to compare strings for exact equality, inequality, lexical ordering, and case-insensitive comparisons.

Also note that in C++, strings are typically compared using the `<` and `>` operators, which perform a lexical comparison of the strings. This means that the comparison is done based on the ASCII code values of the characters in the strings, rather than their natural order.
