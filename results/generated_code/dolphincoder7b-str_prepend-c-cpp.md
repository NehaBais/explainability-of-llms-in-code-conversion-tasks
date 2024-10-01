Sure, here's the equivalent C++ code:
```cpp
#include <iostream>
#include <cstring>

int main() {
    std::string str = "my String";
    const char *cstr = "Changed ";
    char* dup;
    sprintf(str.c_str(), "%s%s", cstr, (dup = strdup(str.c_str())));
    free(dup);
    printf("%s\n", str.c_str());
    return 0;
}
```
In C++, the `sprintf()` function is replaced with `snprintf()`, which is more secure and efficient. The `strdup()` function is not available in C++ due to being a POSIX function, but it can be emulated using `strcpy()`. You also need to include `<cstdlib>` for the `free()` function. Additionally, in C++, strings are objects of the `std::string` class, which is safer and easier to work with than arrays of characters, so we use `std::string` instead of char arrays. The `%s` format specifier used in `sprintf()` in C++ is also replaced with `.c_str()`, as strings in C++ are null-terminated. Finally, there's no need for the `return 0;` statement at the end of main() in C++. In C++, the return value of main() (an integer) is automatically used as an exit status code for the program when it terminates.
