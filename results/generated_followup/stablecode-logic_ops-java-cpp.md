The error is due to missing semicolon (`;`) at the end of the statement. The semicolon is required in C++ (and many other programming languages) to indicate the termination of a statement or expression. 

The entire corrected code block is as follows:
```cpp
#include <iostream>

void logic(bool a, bool b) 
{
    std::cout << "a AND b: " << (a && b) << std::endl;
    std::cout << "a OR b: " << (a || b)) << std::endl;
    std::cout << "NOT a: " << (!a) << std::endl;
}
```
This code should work without any errors.
