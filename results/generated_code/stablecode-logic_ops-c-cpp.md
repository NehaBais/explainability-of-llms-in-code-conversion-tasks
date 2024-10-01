Here's the equivalent C++ code:

```cpp
#include <iostream>

void print_logic(bool a, bool b) {

    std::cout << "a and b is " << std::boolalpha << (a && b)) << std::endl;

    std::cout << "a or b is " << std::boolalpha << ((a || b) && true))) << std::endl;

    std::cout << "not a is " << std::boolalpha << !a << std::endl;

}
```
The code works the same way as the original C code. The only difference is that now we're using `std::boolalpha` to print out boolean values (true/false) in their actual boolean format (i.e., "true" or "false"), instead of just printing out integer values which happen to represent true and false boolean values (in the same way, 1 represents true, 0 represents false). This change makes the output more closely match what would be printed if you were actually using a programming language that supports boolean types natively.
