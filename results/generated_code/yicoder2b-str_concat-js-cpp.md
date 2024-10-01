Sure, here's how you can do this in C++:

```cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    // Create string variable s and assign a text value
    string s = "hello";
   
    // Create another string variable t and concatenate it with a string literal 
    string t = s + " there!";
   
    // Print the contents of the variables
    cout << "s: " << s << endl; // Output: s: hello
    cout << "t: " << t << endl; // Output: t: hellow there!
    return 0;
}
```
This program uses `std::string` from the C++ Standard Template Library (STL) to store and manipulate strings. The `endl` is used instead of `print()` for output, because in C++ there's no equivalent to Python's print function in a standard library.
