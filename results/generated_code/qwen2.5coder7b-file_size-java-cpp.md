Sure! Below is the equivalent code in C++:

```cpp
#include <iostream>
#include <fstream>

int main() {
    // Create a file object for "input.txt" in the current working directory
    std::ifstream fileA("input.txt");
    if (fileA) {
        fileA.seekg(0, std::ios::end);
        std::cout << ", " << fileA.tellg() << " B" << std::endl;
    } else {
        std::cerr << "File 'input.txt' not found in the current working directory." << std::endl;
    }
    fileA.close();

    // Create a file object for "/file.txt" in the root of the filesystem
    std::ifstream fileB("/file.txt");
    if (fileB) {
        fileB.seekg(0, std::ios::end);
        std::cout << ", " << fileB.tellg() << " B" << std::endl;
    } else {
        std::cerr << "File '/file.txt' not found in the filesystem root." << std::endl;
    }
    fileB.close();

    return 0;
}
```

This C++ code performs the following:
1. Opens a file named `input.txt` in the current working directory and prints its size if it exists.
2. Opens a file named `/file.txt` in the filesystem root and prints its size if it exists.

It uses the `<fstream>` library to handle file operations and checks if the files exist before attempting to read their sizes. If the files do not exist, it outputs an error message.
