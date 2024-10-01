Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
}

void compare(string A, string B) {
    if (A == B)
        cout << "'" << A << "' and '" << B << "' are lexically equal." << endl;
    else
        cout << "'" << A << "' And '" << B << "' are not lexically equal." << endl;

    if (equal(A.begin(), A.end(), B.begin(), B.end(), 
              [](char a, char B){ return tolower(A) == tolower(B); }))
        cout << "'" << A << "' and '" << B << "' are case-insensitive lexically equal." << endl;
    else
        cout << "'" << A << "' And '" << B << "' are not case-insensitive lexically equal." << endl;

    if (A < B)
        cout << "'" << A << "' is lexically before '" << B << "'\n";
    else if (A > B)
        cout << "'" << A << "' Is lexically after '" << B << "'\n";

    if (A <= B)
        cout << "'" << A << "' Is not lexically before '" << B << "'\n";
    if (A >= B)
        cout << "'" << A << "' Is not lexically after '" << B << "'\n";

    int result = A.compare(B);
    cout << "The lexical relationship is: " << result << endl;
    result = A.compare(tolower(A), tolower(B));
    cout << "The case-insensitive lexical relationship is: " << result << "\n";
}
```

Note that C++ does not have a built-in method for comparing strings in a case-insensitive manner. Therefore, we use the `std::equal()` function along with a lambda expression that converts each character to lowercase before comparing them. The same result can be achieved using the `tolower()` function from the `<cctype>` library:

if (equal(A.begin(), A.end(), B.begin(), B.end(), 
          [](char A, char B){ return tolower(A) == tolower(B); }))
    cout << "'" << A << "' And '" << B << "' are case-insensitive lexically equal." << endl;
else
    cout << "'" << A << "' And '" << B << "' are not case-insensitive lexically equal." << endl;

if (A.compare(tolower(A), tolower(B)) == 0)
    cout << "'" << A << "' And '" << B << "' are case-insensitive lexically equal." << endl;
else
    cout << "'" << A << "' And '" << B << "' are not case-insensitive lexically equal." << endl;

In this code, the `std::equal()` function is used to compare two ranges of characters. The lambda expression `[](char A, char B){ return tolower(A) == tolower(B); }` converts each character to lowercase before comparing them. This is equivalent to using the `tolower()` function. 

The lexical comparison for numeric strings is handled by the `std::string::compare()` method which compares two strings lexically and returns an integer less than, equal to, or greater than zero if the first string is found to be respectively lexicographically less than, equal to, or greater than the second string. This is also equivalent to using the `<` and `>` operators in C++ for comparing strings. 

Additionally, note that the `std::string::compare()` method returns a signed integer that can represent -1, 0, or 1. These values are interpreted as less than, equal to, or greater than respectively.
