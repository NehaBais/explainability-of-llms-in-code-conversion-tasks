Below is the equivalent C++ code for the Golang program provided:

```cpp
#include <iostream>
#include <string>

int main() {
    // text assigned to a string variable
    std::string s = "hello";

    // output string variable
    std::cout << s << std::endl;

    // this output requested by original task description, although not really required by current wording of task description.
    std::cout << s +  " literal" << std::endl;

    // concatenate variable and literal, assign result to another string variable
    std::string s2 = s +  " literal";

    // output second string variable
    std::cout << s2 << std::endl;

    return 0;
}
```
This C++ program creates a string object `s` and assigns the value "hello". It then outputs this string to the console. The concatenated string (`s + " literal"`) is stored in another string variable `s2`. Finally, it prints out the contents of both string variables.
