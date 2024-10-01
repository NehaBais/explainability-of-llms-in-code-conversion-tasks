```cpp
#include <iostream>
using namespace std;
int main() {
    string s = "hello";
    cout << s + "literal" << endl;
    string s2 = s + "literal";
    cout << s2 << endl;
}
```
The output of the program will be:

helloliteral
helloliteral

In C++, a `string` is represented by the `std::string` class, which provides methods for manipulating and accessing the string's contents. In this code, we create two variables: `s` of type `string` and `s2` of type `string`.

The first line assigns the value "hello" to the variable `s`, using the `std::string` class's constructor. The second line uses the `+=` operator to append the string literal `"literal"` to the value of `s` and stores the result in the variable `s2`.

The third line prints the value of `s + "literal"` using the `cout` function, which is part of the `std::cout` class. The `<<` operator is used to insert the value of `s` into the output stream.

The fourth line does the same as the third line, but with the variable `s2` instead of `s`.

Note that in C++, string literals are enclosed in double quotes (`"`) rather than single quotes (`'`) like in Java.
