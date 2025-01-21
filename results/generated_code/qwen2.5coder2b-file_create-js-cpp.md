To convert the given JavaScript code to C++, you can use the `fs` module from Node.js. Here is how you could do it:

```cpp
#include <iostream>
#include <fstream>

void createFile(const std::string& filePath, const std::string& content) {
    std::ofstream file(filePath);
    if (!file.is_open()) {
        std::cerr << "Unable to open file: " << filePath << std::endl;
        return;
    }
    file << content;
    file.close();
}

void createDirectory(const std::string& directoryPath) {
    if (std::filesystem::create_directory(directoryPath)) {
        std::cout << "Directory created successfully at: " << directoryPath << std::endl;
    } else {
        std::cerr << "Failed to create directory: " << directoryPath << std::endl;
    }
}

int main() {
    // Create the file in current working directory
    createFile("output.txt", "");
    
    // Create the directory at current working directory
    createDirectory("docs");
    
    // Create the file in root of filesystem
    createFile("/output.txt", "");
    
    // Create the directory at root of filesystem
    createDirectory("/docs");
    
    return 0;
}
```

This C++ code creates a new empty file named "output.txt" and an empty directory named "docs" in both the current working directory and the root of the filesystem using the `std::filesystem` library (C++17+). The `createFile` and `createDirectory` functions handle creating files and directories respectively.
