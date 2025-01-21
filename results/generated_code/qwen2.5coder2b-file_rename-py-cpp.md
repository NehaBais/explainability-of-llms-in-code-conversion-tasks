In C++, you can use the `std::rename` function from `<cstdio>` to rename files and directories. Here is how you could write a C++ program to achieve this:

```cpp
#include <iostream>
#include <cstdio>

int main() {
    // Renaming in the current directory
    if (std::rename("input.txt", "output.txt") == 0) {
        std::cout << "Renamed 'input.txt' to 'output.txt'.\n";
    } else {
        std::cerr << "Failed to rename 'input.txt'.\n";
    }

    // Renaming in the root directory
    if (std::rename("/input.txt", "/output.txt") == 0) {
        std::cout << "Renamed '/input.txt' to '/output.txt'.\n";
    } else {
        std::cerr << "Failed to rename '/input.txt'.\n";
    }

    // Renaming in the current directory (absolute path)
    if (std::rename("docs", "mydocs") == 0) {
        std::cout << "Renamed 'docs' to 'mydocs'.\n";
    } else {
        std::cerr << "Failed to rename 'docs'.\n";
    }

    // Renaming in the root directory (absolute path)
    if (std::rename("/docs", "/mydocs") == 0) {
        std::cout << "Renamed '/docs' to '/mydocs'.\n";
    } else {
        std::cerr << "Failed to rename '/docs'.\n";
    }

    return 0;
}
```

Note that this program assumes you are running the code on a Unix-like operating system. The `/` in the directory paths is used to denote the root directory.

Please note that running `std::rename` may throw an exception or error if the file cannot be renamed due to various reasons (e.g., permissions, file not found). Make sure to handle these exceptions appropriately in your production code.
