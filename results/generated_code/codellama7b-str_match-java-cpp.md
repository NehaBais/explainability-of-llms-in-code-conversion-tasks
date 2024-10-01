 In Java, you can use the `startsWith()`, `endsWith()` and `contains()` methods to perform the three types of string matching.

In C++, you can use the `std::string` class and its member functions `find()` and `rfind()` to perform these operations. Here's an example code that demonstrates how to do this:
```c++
#include <iostream>
#include <string>

int main() {
    std::string str1 = "abcd";
    std::string str2 = "ab";

    // Determine if the first string starts with the second string
    if (str1.find(str2) == 0) {
        std::cout << "The first string starts with the second string" << std::endl;
    } else {
        std::cout << "The first string does not start with the second string" << std::endl;
    }

    // Determine if the first string contains the second string at any location
    if (str1.find(str2) != std::string::npos) {
        std::cout << "The first string contains the second string at position: " << str1.find(str2) << std::endl;
    } else {
        std::cout << "The first string does not contain the second string" << std::endl;
    }

    // Determine if the first string ends with the second string
    if (str1.rfind(str2) == str1.size() - str2.size()) {
        std::cout << "The first string ends with the second string" << std::endl;
    } else {
        std::cout << "The first string does not end with the second string" << std::endl;
    }

    return 0;
}
```
In this code, we use the `find()` method of the `std::string` class to find the position of the second string in the first string. If it is found, we print its position. If not, we print that the string is not found. We also use the `rfind()` method to find the last occurrence of the second string in the first string and check if it is at the end of the first string.

Note that in C++, the `std::string` class provides several other methods for manipulating strings, such as `substr()`, `replace()`, `split()`, and more. These methods can be useful when working with strings in C++.
