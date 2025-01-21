In C++, you can use the `std::ofstream` for creating empty files and `mkdir` function from `sys/stat.h` or `<cstdlib>` to create empty directories. Here is how you could convert your Python code into C++:

```cpp
#include <iostream>
#include <string>

void create(const std::string& directory) {
    // Create an output file of size 0 bytes
    std::ofstream outputFile(directory + "/output.txt");
    
    if (!outputFile.is_open()) {
        std::cerr << "Failed to create the output file." << std::endl;
        return;
    }
    outputFile.close();
    
    // Create a directory named 'docs'
    const char* dirname = "docs";
    mkdir(directory.c_str(), 0755);
    
    if (mkdir(dirname, 0755) == -1 && errno != EEXIST) {
        std::cerr << "Failed to create the docs directory." << std::endl;
        return;
    }
}

int main() {
    // Create in current working directory
    create(".");
    
    // Create in filesystem root
    create("/");
    
    return 0;
}
```
This program will create an output file named 'output.txt' of size 0 bytes and a directory named 'docs' in the current working directory and the filesystem root respectively. The `errno` is checked to handle cases when directory creation fails due to existing directories.
