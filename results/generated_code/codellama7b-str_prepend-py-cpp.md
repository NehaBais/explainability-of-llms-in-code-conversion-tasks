 Here is the C++ code that meets your requirements:

```cpp
#include <iostream>
using namespace std;
int main() {
    string s = "12345678";
    s = "0" + s; // by concatenation
    cout << s << endl;
    return 0;
}
```
Explanation:
The `string` data type in C++ is similar to the `str` data type in Python. The `+=` operator in C++ is used for concatenating two strings, while in Python it is used for adding numbers. In this case, we use the `+` operator to concatenate the literal string "0" with the variable `s`.
The code also uses the `std::cout` stream to print the value of the string variable `s`. The `<<` operator is overloaded in C++ to handle outputting strings to streams. Finally, we use the `return 0;` statement to indicate that the program has completed successfully and returned a zero exit status.
