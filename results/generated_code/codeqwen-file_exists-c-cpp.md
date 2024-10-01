The given code in C can be converted to C++ without making any substantial changes. Here's the equivalent version of the code in C++:

```cpp
#include <sys/types.h> 
#include <sys/stat.h>
#include <iostream>
#include <string>

/* Check for regular file. */
bool check_reg(const std::string &path) {
    struct stat sb;
    return stat(path.c_str(), &sb) == 0 && S_ISREG(sb.st_mode);
}

/* Check for directory. */
bool check_dir(const std::string &path) {
    struct stat sb;
    return stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main() {
    std::cout << "input.txt is a regular file? " 
              << (check_reg("input.txt") ? "yes" : "no") 
              << std::endl;
    std::cout << "docs is a directory? " 
              << (check_dir("docs") ? "yes" : "no") 
              << std::endl;
    std::cout << "/input.txt Is a regular file? " 
              << (check_reg("/input.txt") ? "yes" : "no") 
              << std::endl;
    std::cout << "/docs is a directory? " 
              << (check_dir("/docs") ? "yes" : "no") 
              << std::endl;
    return 0;
}
```

The only major change is to replace `printf()` with `std::cout`. The rest of the code remains largely the same.
