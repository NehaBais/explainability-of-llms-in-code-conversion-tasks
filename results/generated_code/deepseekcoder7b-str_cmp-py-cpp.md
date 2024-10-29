In C++, the comparison operators are used for lexical comparisons of strings and other types. The operator "==" is equivalent to string comparison in Python whereas "<", ">", etc., can be used with numeric data types. However, direct usage of these operators directly on strings does not distinguish between case-sensitive and case-insensitive comparison which we can achieve through functions like `std::equal` or `std::lexicographical_compare` in C++ standard library.

Here is the code equivalent to your Python script:
```cpp
#include <iostream>
#include <string>
#include <algorithm>

template<typename T1, typename T2>
void compare(T1 a, T2 b) {
    std::cout << "'"<< a << "' is of type " 
              << typeid(a).name() <<" and '" <<b<<"' is of type "
              << typeid(b).name() <<std::endl;
              
    if (a==b) {
        std::cout << '\''<< a << "' is equal to '" << b << '\'' << std::endl;
    } else {
        std::cout << '\''<< a << "' is not equal to '" << b << '\'' << std::endl;
    }
    
    if (a<b) {
        std::cout << '\''<< a << "' is strictly less than '" << b << '\'' << std::endl;
    } else {
        std::cout << '\''<< a << "' is not strictly less than '" << b << '\'' << std::endl;
    }
    
    if (a>b) {
        std::cout << '\''<< a << "' is strictly greater than '" << b << '\'' << std::endl;
    } else {
        std::cout << '\''<< a << "' is not strictly greater than '" << b << '\'' << std::endl;
    }
}

int main() 
{
    compare("YUP", "YUP");
    compare("BALL", "BELL");
    compare("123", "24");
    compare(24, 123);
    compare(5.0, 5);
    
    std::string str1 = "case";
    std::string str2 = "Case";
    if (str1==str2) {
        std::cout <<"Strings are equal in case-sensitive comparison"<<std::endl;
    } else {
        std::cout <<"Strings are not equal in case-sensitive comparison"<<std::endl;
    }
    
    if (std::lexicographical_compare(str1.begin(), str1.end(), 
                                     str2.begin(), str2.end())) {
        std::cout <<"Strings are lexicographically less in case-insensitive comparison"<<std::endl;
    } else {
        std::cout <<"Strings are not lexicographically less in case-insensitive comparison"<<std::endl;
    }
} 
```
Please note that C++ types (typeid(a).name()) might not return readable names, they return the mangled names of the types. To get human-readable type name you would have to implement your own function or use a library which provides such functionality. This is just an example and does not cover all potential cases.

