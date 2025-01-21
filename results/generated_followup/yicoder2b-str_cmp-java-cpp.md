
The error in a single line is: `"cannot assign to return value because function 'operator*' returns a const value"`  Error occurs when there is an attempt to modify a constant variable or object.

The fix in single line would be: The function "operator*()" which is declared here returns a constant value (char &) and this cannot be modified without declaring it as non-const. So, we don't need to do anything for the error in this case since it's not conflicting with our intention.

The corrected code can be written as:
```cpp
#include <algorithm>
#include <cctype>

int main() {
    std::string B = "Hello, World!";
    std::transform(B.begin(), B.end(), B.begin(), ::tolower); // 'B' string converted to lower case
}
```
The code block transforms the characters of string (B) into lower-case letters using the `std::transform` function from the transformations library in C++ Standard Template Library (STL). Here, we have used an anonymous lambda function (::tolower) that is called for every character in B and converts it to lower case if it's not already.
