In C++, you can use the `std::string::substr` function to get substrings of strings. The indexing scheme is slightly different in C++ than Rust due to the way strings are handled in memory, but this should work for your cases:

```C++
#include <iostream>
#include <string>
#include <algorithm>  // For std::find

int main() 
{
    std::string s = "abc文字化けdef";
    int n = 2;
    int m = 3;
    
    // Print 3 characters starting at index 2 (c文字)
    std::cout << s.substr(n, m) << std::endl;
    
    // Print all characters starting at index 2 (c文字化けdef)
    std::cout << s.substr(n) << std::endl;
    
    // Print all characters except the last (abc文字化けde)
    std::cout << s.substr(0, s.length()-1) << std::endl; 
    
    // Print 3 characters starting with 'b' (bc文)
    auto cpos = std::find(s.begin(), s.end(), 'b') - s.begin();
    if (cpos != s.length())  // Check that character is in string
        std::cout << s.substr(cpos, m) << std::endl;
    
    // Print 3 characters starting with "けd" (けde)
    auto spos = s.find("けd");
    if (spos != std::string::npos)   // Check that substring is in string
        std::cout << s.substr(spos, m) << std::endl;
    
    return 0;
}
```
Note: `std::find()` returns an iterator to the first character of the sequence in the range [first, last), that is equal to value (or the first element if there's no such element). If it doesn't find anything, it will return "last". So we subtract the beginning of the string from this iterator to get the index.

