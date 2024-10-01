Sure, here's the equivalent C++ code:

```cpp
#include <iostream>
using namespace std;

int main() {
    char str[24] = "Good Morning";
    string cstr = " to all";
    string cstr2 = " !!!";
    
    // failure when space allocated to str is insufficient.

    if(sizeof(str) > strlen(str) + cstr.size() + cstr2.size()) {
        /* 1st method */
        strcat_s(str, sizeof(str), cstr.c_str());

        /* 2nd method */
        int x = strlen(str);
        sprintf(&str[x], "%s", cstr2.c_str());

        cout << str;
    }

    return 0;
}
```

The C++ code is mostly equivalent to the original C code. The major differences are:
1. Include `string` header instead of `stdio.h`.
2. Use `std::string` instead of `char *` pointers.
3. Instead of concatenating strings using `strcat`, use the `+` operator or a string stream to concatenate strings in C++.
4. In C++, you don't need to allocate space for the `str` array manually, as it is automatically handled by the compiler. This simplifies the code and reduces potential bugs.
