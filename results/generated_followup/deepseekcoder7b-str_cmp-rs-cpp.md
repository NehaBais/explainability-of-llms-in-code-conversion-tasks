The error occurs because of incorrect usage of `std::strcmp()` function which is used for lexicographic comparison between two null-terminated character sequences represented as strings in C++. The string member functions to be used are `compare()`, `operator==` and similar that can perform lexical comparisons.

The fix would involve using these member functions instead of the deprecated `std::strcmp()`. 

Here is the corrected code:
```cpp
#include <iostream>
#include <string>

int main(){
    std::string a = "abc";
    std::string b("Bac");

    // Comparing two strings for exact equality
    if(a == b) {
        std::cout << "The strings are equal" << std::endl;
    }
    if(a != b){
        std::cout << "The strings are not equal" << std::endl;
    }
  
    // Comparing two strings to see if one is lexically ordered before than the other 
    if(b > a) {
        std::cout << "The first string is lexically after the second" << std::endl;
    }
    
    return 0;
}
```
This code will compare two strings `a` and `b` for equality and to see if one is lexicographically before than another. It uses the comparison operators provided by the string class in C++, which are more robust and safer than their deprecated counterparts such as `std::strcmp()`.

