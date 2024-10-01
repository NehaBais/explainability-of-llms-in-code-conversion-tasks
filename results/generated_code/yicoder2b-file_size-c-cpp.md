Here is the equivalent C++ code for your requirement:
```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>

int main() {
    struct stat foo;
    if(!stat("input.txt", &foo)){
        std::cout << foo.st_size << "\n";
    }else if (!stat("/input.txt", &foo)){
        std::cout << foo.st_size << "\n";
    } else {
        std::cerr << "File not found\n";
        return -1;
    }
    return 0;
}
```

This C++ code does exactly the same thing as your original C code. It opens a file, verifies its size via `stat`, and prints it out. Note that if any error occurs while trying to open the files, such as when they do not exist, the program will print an error message and return -1.
