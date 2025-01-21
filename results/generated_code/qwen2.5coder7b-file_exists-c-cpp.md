Sure, here's the equivalent code in C++:

```cpp
#include <iostream>
#include <sys/stat.h>

// Check for regular file.
bool check_reg(const char *path) {
    struct stat sb;
    return stat(path, &sb) == 0 && S_ISREG(sb.st_mode);
}

// Check for directory.
bool check_dir(const char *path) {
    struct stat sb;
    return stat(path, &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main() {
    std::cout << "input.txt is a regular file? " 
              << (check_reg("input.txt") ? "yes" : "no") << std::endl;
    
    std::cout << "docs is a directory? " 
              << (check_dir("docs") ? "yes" : "no") << std::endl;
    
    std::cout << "/input.txt is a regular file? " 
              << (check_reg("/input.txt") ? "yes" : "no") << std::endl;
    
    std::cout << "/docs is a directory? " 
              << (check_dir("/docs") ? "yes" : "no") << std::endl;

    return 0;
}
```

This C++ code does the same thing as your original C code. It checks if `input.txt` and `docs` exist in both the current working directory and the filesystem root (`/`). The results are printed to the standard output using `std::cout`.
