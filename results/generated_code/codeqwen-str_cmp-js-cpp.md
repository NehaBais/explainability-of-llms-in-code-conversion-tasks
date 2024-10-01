The following code demonstrates how to compare two strings in C++ using the lexicographical comparison function `strcmp` and also includes a brief demonstration of other string comparisons in C++.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Comparing two strings for exact equality
    string s1 = "abcd";
    string s2 = "abcd";
    cout << (s1 == s2) << endl;  // true

    // Comparing two strings for inequality
    cout << (s1 != s2) << endl;  // false

    // Comparing two strings lexically ordered before than the other
    string s3 = "abcd";
    string s4 = "dcba";
    cout << (s3 < s4) << endl;  // true

    // Comparing two strings lexically ordered after than the other
    cout << (s3 > s4) << endl;  // false

    // Case sensitive comparison
    cout << (s1 == s2.toLowerCase()) << endl;  // false

    // Case insensitive comparison
    cout << (s1.toLowerCase() == s2.toLowerCase()) << endl;  // true

    // Numeric string comparison
    string num1 = "123";
    string num2 = "123";
    cout << (num1 == num2) << endl;  // true

    return 0;
}
```

Note: C++ does not have a built-in `toLowerCase()` method for strings, so this method must be defined manually. Here is an example implementation of it:

string toLowerCase(const string& s) {
    string result = "";
    for (char c : s) {
        if ('A' <= c && c <= 'Z') {
            result += c + ('a'-'A');
        } else {
            result += c;
        }
    }
    return result;
}

This implementation works by checking each character in the string. If it's an uppercase letter, it converts it to lowercase using the formula `c + ('a'-'A')`. Otherwise, it just appends the character as-is.

Also, note that C++ does not have a built-in way of comparing numeric strings lexically; they are treated as sequences of characters and compared alphabetically.
