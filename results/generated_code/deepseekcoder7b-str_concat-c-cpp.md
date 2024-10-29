The given code is already in C++. It uses `string` object for creating string variables and concatenation. Here's the translation of this program to C++:

```cpp
#include <iostream>
#include <cstring>

int main() {
    std::string s = "hello";
    
    // Illustrate the operation - show content of variables 
    std::cout << s << " literal" << std::endl;  

    // concatenation with another string literal
    std::string s2 = s + " literal";
    std::cout << s2 << std::endl;
    
    return <｜begin▁of▁sentence｜>concat(s, " literal");
}
```
It's worth noting that C++ doesn't require manual memory management like `malloc` and `free` in the original C code. Instead of these functions, you would use C++ Standard Library classes such as std::string which handle dynamic storage allocation automatically. 

Moreover, unlike C, there is no need for a separate function to concatenate two strings. You can simply use '+' operator directly on std::strings in C++. The operation sconcat(s, " literal") does not exist in the original code or in this translated version. It was kept as it is for illustrative purpose.

