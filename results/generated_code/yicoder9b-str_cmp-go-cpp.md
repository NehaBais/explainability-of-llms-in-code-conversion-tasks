Below is an equivalent C++ code that accomplishes the same tasks using standard library functions:

```C++
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // C++ language string comparison operators and functionality:
    std::string c = "cat";
    std::string d = "dog";

    if (c == d) {
        std::cout << c << " is bytewise identical to " << d << std::endl;
    }
    else if(c != d){
        std::cout << c << " is bytewise different from " << d << std::endl;
    }

    // Lexicographical comparison.
    if (c > d) {
        std::cout << c << " is lexically greater than " << d << std::endl;
    } else if(c < d) {
        std::cout << c << " is lexically less than " << d << std::endl;
    } 

    // Case insensitive comparison.
    std::string copy_c = c;
    std::transform(copy_c.begin(), copy_c.end(), copy_c.begin(), ::tolower);
    std::string copy_d = d;
    std::transform(copy_d.begin(), copy_d.end(), copy_d.begin(), ::tolower);

    if (copy_c == copy_d) {
        std::cout << c << " is equal to "<<d<<" when case is ignored"<< std::endl;
    } else {
        std::cout << c << " and "<<d<<" are not equal when case is ignored"<< std::endl;
    } 

   // Numeric strings comparison.
   c = "02145368791";
   d = "21453687910";

   if (c < d) {
       std::cout << c << " is less than "<< d<< std::endl;
   } 

    return 0;
}
```

This C++ code performs the same tasks as your provided Go code: it demonstrates how to compare two strings for exact equality, inequality, and lexical order. It also shows case insensitive comparison and numeric string comparison.
