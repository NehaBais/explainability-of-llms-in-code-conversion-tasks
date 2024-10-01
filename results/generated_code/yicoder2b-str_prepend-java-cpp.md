Sure, here is how you can achieve this in C++:
```cpp
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "def"; // create a string variable with value "def"
    str = "abc" + str;  // prepend "abc" to the original string
    cout << str << endl;  // print out the final result
    return 0;
}
```
Note: C++ uses `std::string` as a basic data type for handling strings. The `+` operator is used for concatenation in C++. The `endl` statement terminates the line and outputs to the standard output device (usually the console). The `main()` function represents the entry point of the program execution.
