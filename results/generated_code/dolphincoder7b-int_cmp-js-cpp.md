### Code (C++):
```cpp
#include <iostream>
 
int main() {
    int a, b;
 
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    if (a < b)
        std::cout << a << " is less than " << b << "\n";
    else if (a == b)
        std::cout << a << " equals " << b << "\n";
    else if (a > b)
        std::cout << a << " is greater than " << b << "\n";
    
    return 0;
}
```
This code uses the standard I/O library to get input from the user and print output. It compares the values of `a` and `b`, checking each condition using the equality operator (`==`) and the relational operators `<` and `>`. If the conditions are met, a message is printed indicating whether `a` is less than, equal to or greater than `b`.
