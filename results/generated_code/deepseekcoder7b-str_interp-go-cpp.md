The equivalent C++ code would be as follows. In this C++ snippet, we will use the standard library function `std::string`'s `replace()` method to replace the sub-string "X" with another string (value of variable):

```cpp
#include <iostream>
#include <string>

int main() 
{
    std::string str = "Mary had a X lamb";
    std::string txt = "big";
    
    size_t pos = 0;
    while ((pos = str.find("X", pos)) != std::string::npos) {
         str.replace(pos, 1, txt);
         pos += txt.length();
   <｜begin▁of▁sentence｜>	   }
    
    std::cout << str;

    return 0;
}
```
Here's the explanation of the C++ code:
The `find()` method in a loop is used to find all occurrences of "X" in string. If we found one, then it replaces that occurrence with variable txt. The `pos += txt.length();` line ensures that if there are multiple Xs in the string, they will be replaced correctly and not overlapped by each other.

