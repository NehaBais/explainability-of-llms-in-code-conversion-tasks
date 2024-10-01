Sure, here is how you can do it in C++.
```cpp
#include <iostream>
#include <string> // Needed for std::string
using namespace std; 
int main() {
    // Define a string variable s and assign it to "Hello"
    string s = "Hello";
    
    // Prepend the string with another string literal
    s = ", World" + s;
    
    // Print the updated string
    cout << s << endl;
    return 0;
}
```
In this C++ code, we are using the `std::string` class from the standard library for handling strings. The `+` operator is used to concatenate (i.e., join) two strings. The `endl` statement is a way of moving the output cursor to a new line.
