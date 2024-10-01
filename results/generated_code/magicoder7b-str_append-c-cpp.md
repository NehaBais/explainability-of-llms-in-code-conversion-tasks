 In C++, the code can be converted as follows:
```cpp
#include <iostream>
#include <cstring> // for strlen and strcpy

int main() {
    std::string str = "Good Morning";
    const char* cstr = " to all";
    const char* cstr2 = " !!!";

    str += cstr; 
    str += cstr2;

    std::cout << str << std::endl;
    
    return 0;
}
```
In this code, `std::string` is used instead of `char[]`. The `+=` operator is used to append two strings together. Note that we use `const char*` for string literals because C++ doesn't allow you to modify the contents of a string literal, unlike in C where you can do anything with it once assigned to an array.
Finally, I added `\n` at the end of the print statement to force a newline after the output, just like in the original C code.
