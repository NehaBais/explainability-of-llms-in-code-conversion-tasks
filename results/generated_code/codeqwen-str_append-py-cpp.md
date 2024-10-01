Here is your code converted to C++:

```c++
#include <iostream>
#include <string>

int main() {
    std::string str = "12345678";
    str += "9!";
    std::cout << str << std::endl;
    return 0;
}
```

This program will append the string literal "9!" to the end of our initial string variable `str`. The contents of this new string are then printed out. Note that C++ uses `<<` for output to the console, whereas Python uses `print()`.
