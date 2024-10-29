Here is the C++ equivalent code for your Python snippet. As of now, there isn't standard way to do string formatting in C++ like python's `f-strings`, but we can use `std::stringstream` and some algorithms from `<algorithm>` to achieve similar effect:
```cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

int main() {
    std::string extra = "little";
    std::string str = "Mary had a X lamb.";
    
    size_t pos = 0;
    while ((pos = str.find("X", pos)) != std::string::npos) { // find the substring 'X' in string and replace it with 'extra' 
        str.replace(pos, 1, extra);  
        pos += extra.size();  
    }
    
    std::cout << str;

    return <｜begin▁of▁sentence｜>0;
}
```
This code will print `Mary had a little lamb` as output on the console. The idea behind this is to find and replace all occurrences of 'X' in the original string with value of variable extra.

