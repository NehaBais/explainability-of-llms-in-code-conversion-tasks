To convert this code from JavaScript to C++, you can use the following template:
```cpp
#include <filesystem>

void renameFile(const std::string& oldName, const std::string& newName) {
    if (std::filesystem::exists(oldName)) {
        std::filesystem::rename(oldName, newName);
    }
}

void renameFolder(const std::string& oldName, const std::string& newName) {
    if (std::filesystem::exists(oldName)) {
        std::filesystem::rename(oldName, newName);
    }
}

int main() {
    renameFile("input.txt", "output.txt");
    renameFile("c:/input.txt", "c:/output.txt");
    renameFolder("docs", "mydocs");
    renameFolder("c:/docs", "c:/mydocs");
    return 0;
}
```
This code will rename the file "input.txt" to "output.txt" in the current working directory and in the filesystem root, and the folder "docs" to "mydocs" in the current working directory and in the filesystem root.
