 To convert the given Go code to C++, we need to follow these steps:

1. Include necessary headers for file and directory operations.
2. Define functions similar to those in the Go code for creating files and directories.
3. Use appropriate APIs to create files and directories.
4. Handle errors appropriately.

Here's the equivalent C++ code:

```cpp
#include <iostream>
#include <fstream>
#include <cerrno>
#include <string>
#include <unistd.h> // For chdir to change directory

void createFile(const std::string& fn) {
    std::ofstream file(fn);
    if (!file) {
        std::cerr << "Error creating file: " << strerror(errno) << std::endl;
        return;
    }
    std::cout << "File " << fn << " created!" << std::endl;
}

void createDir(const std::string& dn) {
    int result = mkdir(dn.c_str(), 0666);
    if (result != 0) {
        std::cerr << "Error creating directory: " << strerror(errno) << std::endl;
        return;
    }
    std::cout << "Directory " << dn << " created!" << std::endl;
}

int main() {
    // Change to the current working directory
    if (chdir(".") == -1) {
        std::cerr << "Error changing to current directory: " << strerror(errno) << std::endl;
        return 1;
    }

    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");

    return 0;
}
```

### Explanation:

1. **Headers**: We include `<iostream>` for input/output operations, `<fstream>` for file operations, `<cerrno>` for error handling, and `<string>` for string manipulation. Additionally, `<unistd.h>` is included to use the `chdir` function for changing directories.
2. **Functions**: 
   - `createFile(const std::string& fn)`: Opens a file stream with the given filename. If the file cannot be opened, it prints an error message using `std::cerr`.
   - `createDir(const std::string& dn)`: Uses the `mkdir` function from `<unistd.h>` to create a directory. If the directory cannot be created, it prints an error message.
3. **Main Function**: 
   - The program changes the current working directory using `chdir(".")`. If this fails, it prints an error message and exits.
   - It then calls `createFile` and `createDir` for both relative paths (`input.txt`, `docs`) and absolute paths (`/input.txt`, `/docs`).

This C++ code performs the same operations as the provided Go code but uses different standard library functions to achieve the same goals.
