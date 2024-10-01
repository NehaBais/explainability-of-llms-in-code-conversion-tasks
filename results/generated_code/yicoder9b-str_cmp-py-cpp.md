Here is a C++ version of the Python code you provided:

```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool caseInsensitiveCompare(const string &a, const string &b) {
    if (a.length() != b.length()) return false;
    for (int i = 0; i< a.length(); ++i)
        if (tolower(a[i]) != tolower(b[i])) return false;
    return true;
}

void compare(string a, string b) {
    cout << "\"" << a << "\" is of type \""<< typeid(a).name() <<  "\" and \"" << 
         b << "\" is of type \"" << typeid(b).name() << "\"" << endl;
    if (a < b)      cout << '\"' << a << "\" is strictly less than \"" << b << "\"" <<  endl;
    if (a <= b)     cout << '\"' << a << "\" is less than or equal to \"" << b << "\"" << endl;
    if (a > b)      cout << '\"' << a << "\" is strictly greater than \"" << b<< "\"" <<  endl;
    if (a >= b)     cout << '\"' << a << "\" is greater than or equal to \"" << b << "\"" << endl;
    if (a == b)     cout << '\"' << a << "\" is equal to \""<<b<< "\"" <<  endl;
    if (!caseInsensitiveCompare(a, b)) cout << '\"' << a << "\" is not equal ignoring case \""<<b<< "\"" 
                    << endl;
    if (a != b)     cout << '\"' << a << "\" is not equal to \"" << b << "\"" <<  endl;
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    // C++ will convert int to string when compared with a string.
    compare("50", "5");
    return 0;
}
```
This program provides the same functionality as your Python code, except for object identity checks which do not have an equivalent in C++. Instead we have used the `caseInsensitiveCompare` function to provide similar functionality.

Note that comparing strings of different types (e.g. int and string) is undefined behavior in Python but C++ will implicitly convert the integer to a string before performing comparison, so "50" < 5 would return false.
