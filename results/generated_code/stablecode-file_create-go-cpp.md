The equivalent C++ code for the given Golang code would look like:

```cpp
#include <iostream>
#include <filesystem>

void createFile(const std::string& fn) {
    try {
        std::filesystem::path filePath(fn);
        if (std::filesystem::exists(filePath)) {
            throw std::runtime_error("File already exists");
        }
        std::filesystem::create_directories(filePath.parent());
        std::ofstream outputFile(filePath);
        outputFile << ""; // Empty file of size 0 bytes
        outputFile.close();
        std::cout << "File " << fn << " created!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error creating file: " << e.what() << std::endl;
    }
}

void createDir(const std::string& dn) {
    try {
        std::filesystem::path dirPath(dn);
        if (std::filesystem::exists(dirPath))) {
            throw std::runtime_error("Directory already exists");
        }
        std::filesystem::create_directories(dirPath));
        std::cout << "Directory " << dn << " created!" << std::endl;
    } catch (const std::exception& e)) {
        std::cerr << "Error creating directory: " << e.what() << std::endl;
    }
}

int main() {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");
    return 0;
}
```
This code will create an empty file called "input.txt" in the current working directory, and another empty file called "input.txt" in the filesystem root. It will also create two empty directories called "docs" and "/docs", respectively, in the current working directory and its parent directories.
