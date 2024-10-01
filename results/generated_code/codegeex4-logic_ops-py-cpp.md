Here is your Python code converted to C++:

```cpp
#include<iostream>

void logic(bool a, bool b) {
    std::cout << "a and b: " << (a && b) << std::endl;
    std::cout << "a or b: " << (a || b) << std::endl;
    std::cout << "not a: " << !a << std::endl;
}

int main() {
    bool a = true, b = false;
    logic(a, b);
}
```

Please note that in C++, the result of logical operations (and, or, not) is an integer where 0 represents false and 1 represents true. If you want the output to be boolean (true/false), you can modify the code like below:

#include<iostream>
#include<string>

std::string boolToString(bool value){
    return value ? "true" : "false";
}

void logic(bool a, bool b) {
    std::cout << "a and b: " << boolToString(a && b) << std::endl;
    std::cout << "a or b: " << boolToString(a || b) << std::endl;
    std::cout << "not a: " << boolToString(!a) << std::endl;
}

int main() {
    bool a = true, b = false;
    logic(a, b);
}

In this version, the boolToString function is used to convert boolean value into string.
