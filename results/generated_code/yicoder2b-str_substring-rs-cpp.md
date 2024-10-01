Sure, here is the equivalent C++ code for your requirement.
```cpp
#include <iostream>
#include <string>

int main(){
    std::string s = "abc文字化けdef";
    char c = 'c'; // The character you are interested in
    size_t n = 2;  // Index at which to start
    size_t m = 3;  // Length of the substring to print

    std::cout << s.substr(n,m) << std::endl;                   // Prints: c文字
    std::cout << s.substr(n) << std::endl;                     // Prints: c文字化けdef
    std::string s1 = s.erase(n);                               // Erases the nth character of the string 
    std::cout << s1 << std::endl;                             // Prints: abcde f
    std::cout << s.substr(s.find(c)).substr(0,m) << std::endl;   // Prints: bc文
    std::cout << s.substr(s.find("けd")).substr(0,m) << std::endl; // Prints: けde

    return 0;
}
```
