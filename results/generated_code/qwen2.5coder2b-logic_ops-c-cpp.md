```cpp
#include <iostream>

void print_logic(bool a, bool b)
{
    std::cout << "a and b is: " << (a && b) << std::endl;
    std::cout << "a or b is: " << (a || b) << std::endl;
    std::cout << "not a is: " << (!a) << std::endl;
}

int main()
{
    print_logic(true, true);
    print_logic(false, true);
    print_logic(true, false);
    print_logic(false, false);

    return 0;
}
```

This C++ code defines a function `print_logic` that takes two boolean arguments and prints the results of "and", "or", and "not" operations on them. The `main` function demonstrates calling this function with different sets of arguments.
