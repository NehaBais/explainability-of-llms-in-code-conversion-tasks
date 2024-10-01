In C++, the standard library does not have direct equivalents for functions like `fs.writeFile()` or `fs.mkdir()`, so we need to use system calls. Here's how you can do it:

```cpp
#include <iostream>
#include <cstdlib>
#include <unistd.h>

int main(void) {
    // Create an empty file called "output.txt" in the current working directory
    if (open("./output.txt", O_CREAT | O_TRUNC, 0666) == -1) {
        std::cerr << "Error creating file: ./output.txt\n";
        return EXIT_FAILURE;
    }

    // Create an empty directory called "docs" in the current working directory
    if (mkdir("./docs", 0777) == -1) {
        std::cerr << "Error creating directory: ./docs\n";
        return EXIT_FAILURE;
    }

    // Create an empty file called "output.txt" in the root directory
    if (open("/output.txt", O_CREAT | O_TRUNC, 0666) == -1) {
        std::cerr << "Error creating file: /output.txt\n";
        return EXIT_FAILURE;
    }

    // Create an empty directory called "docs" in the root directory
    if (mkdir("/docs", 0777) == -1) {
        std::cerr << "Error creating directory: /docs\n";
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
```
Please note that `open()` function with mode `O_CREAT | O_TRUNC` is used to create a file if it doesn't exist or truncate an existing file. `mkdir()` is used for creating directories. Both functions return -1 in case of an error, so we should check the return value and print an appropriate error message before returning from the main function.
