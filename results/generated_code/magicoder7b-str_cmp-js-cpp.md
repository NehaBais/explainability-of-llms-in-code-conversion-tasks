 In C++, you can use the `std::string` data type from `<string>` library to handle strings, and the `std::less` function from `<algorithm>` library for lexicographical comparison. Here is how to achieve similar results as demonstrated in JavaScript:

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a = "abcd";
    string b1 = "abcd";
    string b2 = "dcba";
    string c1 = "ABCD";
    string c2 = "abcd";
    int d1 = 123;
    string d2 = "123";

    // Comparing two strings for exact equality
    cout << (a == b1) << "\n";   // true
    cout << (a != b1) << "\n";   // false
    
    // Comparing two strings to see if one is lexically ordered before than the other
    cout << (a < b2) << "\n";   // true
    cout << (a > b2) << "\n";   // false

    // Comparing two strings for inequality
    cout << (d1 != d2) << "\n";  // true

    // Comparing two strings to see if one is lexically ordered after than the other
    cout << (a > b1) << "\n";   // false
    cout << (a < b1) << "\n";   // false
    
    // Demonstrating case sensitive and insensitive comparison.
    cout << (c1 == c2) << "\n";  // false
    cout << (tolower(c1[0]) == tolower(c2[0])) << "\n";  // true

    return 0;
}
```
Note: In the last comparison, `"abcd"` and `"dcba"` are considered as equal lexically because both strings contain exactly same characters (ignoring case). If you want them to be considered as not equal lexicographically, you can use `std::less` function which will compare them in a case-insensitive manner:

cout << std::lexicographical_compare(a.begin(), a.end(), b1.begin(), b1.end()); // Will print '0' for equal and '1' for unequal.

