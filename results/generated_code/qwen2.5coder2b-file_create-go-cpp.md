```cpp
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

void createFile(const std::string& path) {
    std::ofstream file(path);
    if (!file.is_open()) {
        std::cerr << "Error creating file: " << path << std::endl;
    } else {
        file.close();
        std::cout << "File created at: " << path << std::endl;
    }
}

void createDir(const std::string& path) {
    if (!std::filesystem::create_directories(path)) {
        std::cerr << "Error creating directory: " << path << std::endl;
    } else {
        std::cout << "Directory created at: " << path << std::endl;
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
