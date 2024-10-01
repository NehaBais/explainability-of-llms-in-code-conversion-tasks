Here is your C code converted to C++:

```cpp
#include <iostream>
#include <string.h>
#include <stdlib.h>

int main() {
    std::string str = "my String";
    std::string cstr = "Changed ";
    char* dup;

    // Prepend the string variable with another string literal
    str = cstr + std::string(dup = strdup(str.c_str())), ' ', cstr.size() - 1);
    free(dup);

    std::cout << str << std::endl;

    return 0;
}
```
Keep in mind that C++ doesn't have `sprintf` function, but `printf` should be used instead for string output. The conversion from `%s` to `std::string` is done via the concatenation operation and specifying the size of the "Changed " substring using `cstr.size() - 1`. 

Also note that `free(dup)` was included in your original code, but since `strdup()` is a part of C standard library (POSIX), it does not need to be free'd after usage because the memory allocated by `strdup()` will automatically get freed when the program exits. So you can remove `free(dup);` from your code without causing any issues.
