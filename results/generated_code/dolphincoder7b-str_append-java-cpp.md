The equivalent C++ code for the given Java code is:
```
#include <iostream>
using namespace std;
int main() {
    string str = "abc";
    cout << str << endl;
    str += "def";
    cout << str << endl;
    return 0;
}
```
In C++, you can append strings by using the "+" operator between two strings. This operator will concatenate two strings into one new string. The "+=" operator is equivalent to assigning a concatenated string to another variable, effectively appending the second string to the first.
