In C++, you can use the `+=` operator to append a string literal to a string variable. Here is an example of how to convert the JavaScript code to C++:
```
#include <iostream>
using namespace std;

int main() {
    string s1 = "Hello";
    s1 += ", World!";
    cout << s1 << endl;
    return 0;
}
```
This will output "Hello, World!".
Note that in C++, strings are represented by the `std::string` class, which is part of the Standard Template Library (STL). The `+=` operator is used to append a string literal to a string variable. The `cout` statement is used to print the contents of the variable to the console.
