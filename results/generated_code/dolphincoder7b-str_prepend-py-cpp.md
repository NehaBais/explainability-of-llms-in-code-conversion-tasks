Below is the equivalent C++ code for the given Python script:
```cpp
#include <iostream>
 
int main() {
    std::string s = "12345678";
    s = "0" + s;   // by concatenation
    std::cout << s << std::endl;
    return 0;
}
```
The code above creates a string variable named `s` with the initial value of "12345678". Then, it prepends another string literal ("0") to the current value of `s`. Finally, it prints the final result (`"012345678"`) onto the screen.
