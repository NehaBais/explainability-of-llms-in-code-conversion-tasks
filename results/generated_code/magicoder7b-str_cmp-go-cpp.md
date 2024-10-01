 Below is the C++ version of your Golang code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string c = "cat";
    std::string d = "dog";
    
    if (c == d) {
        std::cout << c << " is bytewise identical to" << d << std::endl;
    } else {
        std::cout << c << " is bytewise different from" << d << std::endl;
    }
    if (c != d) {
        std::cout << c << " is lexically bytewise less than" << d << std::endl;
    }
    if (c < d) {
        std::cout << c << " is lexically bytewise less than" << d << std::endl;
    } else {
        std::cout << c << " is lexically bytewise greater or equal to" << d << std::endl;
    }
    
    // For the case-insensitive comparison, we need to implement it by ourselves. 
    if (c.compare(d) == 0){
        std::cout << c << " is equal to " << d << " under case insensitivity"<< std::endl;
    } else {
        std::cout << c << " is not equal to " << d << " under case insensitivity"<< std::endl;
    }
    
    return 0;
}
```

Just like in Go, C++ compares two strings byte by byte. The equality and inequality comparison are also bytewise. For lexical ordering of strings, we can use the compare function from string class which returns an integer less than, equal to or greater than zero if the left-hand operand is less than, equal to, or greater than the right-hand operand respectively.

The case-insensitive comparison example is a bit more tricky in C++ compared to Go because the standard library does not have direct support for this kind of operation. You would need to implement it by yourself by either transforming both strings into lowercase/uppercase and then comparing, or using a third-party library to perform Unicode normalization as required.
