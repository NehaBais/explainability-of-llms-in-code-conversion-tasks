Sure, here's the equivalent C++ code:

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>

int main() {
    struct stat foo;
    if (stat("input.txt", &foo) != 0){
        std::cerr << "Error: file does not exist or access denied";
        return -1;
    }
    std::cout << "Size of input.txt is: " << foo.st_size << std::endl;

    if (stat("/input.txt", &foo) != 0){
        std::cerr << "Error: file does not exist or access denied";
        return -1;
    }
    std::cout << "Size of /input.txt is: " << foo.st_size << std::endl;

    return 0;
}
```

In the converted code, we first check if a file exists using the `stat` function, then print its size to stdout. If an error occurs, such as a missing file or insufficient permissions, we display an error message and exit with an error code of -1. Please note that this version of the code uses C++ features such as `std::cerr`, `std::cout`, and `std::endl`.

Let me know if you have any further questions!
