 Here is the C++ code that corresponds to the given Python code:
```
#include <iostream>
#include <string>
using namespace std;

void compare(const string& a, const string& b) {
    cout << "'" << a << "' of type '" << a.get_type() << "' and '" << b << "' of type '" << b.get_type() << "'" << endl;
    if (a <  b)      cout << "'" << a << "' is strictly less than  '" << b << "'" << endl;
    if (a <= b)      cout << "'" << a << "' is less than or equal to '" << b << "'" << endl;
    if (a >  b)      cout << "'" << a << "' is strictly greater than  '" << b << "'" << endl;
    if (a >= b)      cout << "'" << a << "' is greater than or equal to '" << b << "'" << endl;
    if (a == b)      cout << "'" << a << "' is equal to '" << b << "'" << endl;
    if (a != b)      cout << "'" << a << "' is not equal to '" << b << "'" << endl;
    if (a.is(b))     cout << "'" << a << "' has object identity with '" << b << "'" << endl;
    if (!a.is(b))   cout << "'" << a << "' has negated object identity with '" << b << "'" << endl;
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
Explanation:

* In C++, we can use the `string` class to represent strings and perform operations on them.
* The `get_type()` method returns the type of the string object, which is a string object in this case.
* We can compare two strings using the `<`, `<=`, `>`, and `>=` operators, which return a boolean value indicating whether one string comes before, is equal to, or comes after the other string, respectively.
* We can also use the `==` and `!=` operators to check if two strings are equal or not.
* The `is()` method returns a boolean value indicating whether the object passed as an argument has the same identity (i.e., memory location) as the calling object.
* The `!a.is(b)` expression checks if the object passed as an argument does not have the same identity as the calling object, which is useful for checking whether two strings are not equal or not.

Note that in C++, we cannot compare a string and an integer directly using the `<`, `<=`, `>`, and `>=` operators. Instead, we need to convert one of the operands to a string or integer type before comparing them. For example, we can convert the integer `24` to a string `"24"` by calling the `to_string()` method on it, like this: `compare(to_string(24), "123");`.
