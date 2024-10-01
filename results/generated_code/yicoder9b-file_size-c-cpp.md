Here is the C++ version of your code:

```cpp
#include <iostream>
#include <sys/stat.h>

int main(void) {
    struct stat st;

    if (stat("input.txt", &st) == 0) {
        std::cout << "Size of 'input.txt': " << st.st_size << std::endl;
    } else {
        std::cerr << "Unable to get the size of 'input.txt'" << std::endl;
    }

    if (stat("/input.txt", &st) == 0) {
        std::cout << "Size of '/input.txt': " << st.st_size << std::endl;
    } else {
        std::cerr << "Unable to get the size of '/input.txt'" << std::endl;
    }

    return 0;
}
```

Note: C++ standard does not have a built-in function for file operations that are natively available in C such as `stat`. So, you need to use the POSIX functions directly which are available on most Unix-like systems including Linux and MacOS. This code will only work if your system supports these functions. If not, you may have to write platform-specific code for file operations.
