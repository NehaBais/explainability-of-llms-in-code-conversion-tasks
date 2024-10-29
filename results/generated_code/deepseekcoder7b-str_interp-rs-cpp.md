Here is the equivalent C++ code for your Rust snippet:

```cpp
#include <iostream>
#include <string>
#include <regex>  // for std::regex, std::regex_replace

int main() {
    // replace "{}" by defined values or variables
    std::string str = "Mary had a {} lamb";
    
    // Replace first instance of {} with "little"
    std::regex r("\\{\\}");  
    str = std::regex_replace(str, r, "little"); 

    std::cout << str;
}
```
This C++ code is using the `std::regex` and `std::regex_replace()` from Standard Library to perform replacement of defined character sequences in a string. It finds first occurrence of pattern "{}" within given string ("Mary had a {} lamb") and replace it by the "little". The result, prints out:

Mary had a little lamb

