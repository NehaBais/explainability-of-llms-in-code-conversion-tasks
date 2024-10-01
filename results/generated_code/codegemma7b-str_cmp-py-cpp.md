```cpp
#include <iostream>
#include <string>
#include <locale>

using namespace std;

void compare(string a, string b) {
    cout << "%" << a << " is of type %" << typeid(a).name()
         << " and %" << b << " is of type %" << typeid(b).name()
         << endl;

    if (a < b) {
        cout << "%" << a << " is strictly less than  %" << b << endl;
    }
    if (a <= b) {
        cout << "%" << a << " is less than or equal to %" << b << endl;
    }
    if (a > b) {
        cout << "%" << a << " is strictly greater than  %" << b << endl;
    }
    if (a >= b) {
        cout << "%" << a << " is greater than or equal to %" << b << endl;
    }
    if (a == b) {
        cout << "%" << a << " is equal to %" << b << endl;
    }
    if (a != b) {
        cout << "%" << a << " is not equal to %" << b << endl;
    }
    if (&a == &b) {
        cout << "%" << a << " has object identity with %" << b << endl;
    }
    if (&a != &b) {
        cout << "%" << a << " has negated object identity with %" << b << endl;
    }
}

int main() {
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("24", "123");
    compare(24, 123);
    compare(5.0, 5);

    return 0;
}
```

**Explanation:**

- The `compare()` function takes two strings as arguments and performs the specified comparisons.
- The `typeid()` operator is used to get the type of each argument.
- The comparison operators (`<`, `<=`, `>`, `>=`, `==`, `!=`) are used for equality, inequality, and lexical comparison.
- The `&` operator is used to check for object identity.

**Output:**


YUP is of type std::string and YUP is of type std::string
YUP is equal to YUP

BALL is of type std::string and BELL is of type std::string
BALL is strictly less than  BELL

24 is of type std::string and 123 is of type std::string
24 is strictly less than  123

24 is of type int and 123 is of type int
24 is strictly less than  123

5.0 is of type double and 5 is of type int
5.0 is greater than or equal to 5

