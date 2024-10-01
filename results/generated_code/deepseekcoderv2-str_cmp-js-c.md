## Solution 1: C++

The following is an example using the standard library string class in C++ to compare strings. String comparison methods include `==` for equality, `!=` for inequality, `<` for lexicographical order before and `>` for lexicographical order after. These operations are case sensitive by default but can be made case insensitive with the use of `str.ignorecase()`.

```c++
#include <iostream>
#include <string>
using namespace std;
int main () {
    string str1 = "abcd", str2 = "dcba";
    cout << (str1 == str2) << endl; // false
    cout << !(str1 == str2) << endl; // true
    cout << (str1 != str2) << endl; // true
    cout << (str1 < str2) << endl; // false, lexicographically ordered before "dcba"
    cout << (str1 > str2) << endl; // true, lexicographically ordered after "dcba"
    cout << str1.ignorecase() == str2.ignorecase() << endl; // true, case-insensitive comparison
}
```

