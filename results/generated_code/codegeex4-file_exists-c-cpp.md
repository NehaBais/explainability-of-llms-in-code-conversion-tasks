```cpp
#include <sys/types.h> 
#include <sys/stat.h>
#include <iostream>
#include <unistd.h>

/* Check for regular file. */
int check_reg(const char *path) {
    struct stat sb;
    return stat(path, &sb) == 0 && S_ISREG(sb.st_mode);
}

/* Check for directory. */
int check_dir(const char *path) {
    struct stat sb;
    return stat(path, &sb) == 0 && S_ISDIR(sb.st_mode);
}

int main() {
    std::cout << "input.txt is a regular file? " << (check_reg("input.txt") ? "yes" : "no") << std::endl;
    std::cout << "docs is a directory? " << (check_dir("docs") ? "yes" : "no") << std::endl;
    std::cout << "/input.txt is a regular file? " << (check_reg("/input.txt") ? "yes" : "no") << std::endl;
    std::cout << "/docs is a directory? " << (check_dir("/docs") ? "yes" : "no") << std::endl;

    return 0;
}
```
