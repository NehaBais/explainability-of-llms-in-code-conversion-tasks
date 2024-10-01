Below is the equivalent C++ code for creating a new empty file called "output.txt", an empty directory called "docs" and it should be done twice: once in the current working directory and once in the filesystem root.

```cpp
#include<iostream>
#include<filesystem>

namespace fs = std::filesystem;

int main() {
    try {
        // Create file "output.txt" in current directory
        fs::path currentFilePath("output.txt");
        if(!fs::exists(currentFilePath)) {
            fs::create_directories(currentFilePath.parent());
            std::ofstream ofs(currentFilePath);
            ofs.close();
        }

        // Create file "output.txt" in root directory
        fs::path rootFilePath("C:\\output.txt"); // Modify this path according to your requirements
        if(!fs::exists(rootFilePath))) {
            std::ofstream ofs(rootFilePath);
            ofs.close();
        }

        // Create directory "docs" in current directory
        fs::path currentDirPath("docs");
        if(!fs::exists(currentDirPath))) {
            fs::create_directory(currentDirPath));
        }

        // Create directory "docs" in root directory
        fs::path rootDirPath("C:\\docs"); // Modify this path according to your requirements
        if(!fs::exists(rootDirPath))) {
            fs::create_directory(rootDirPath));
        }
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
```
This program will create a new empty file called "output.txt" in the current working directory and once in the root of your system. It also creates an empty directory called "docs". 

Before running this code, you should ensure that the directories where you want to create these files/directories already exist or not. If they do not exist, then before creating the new file/directory, we need to create the required parent directories using the function `fs::create_directories(currentFilePath.parent()))`.

Also, note that this code uses C++17 features, so you should have a C++17 compliant compiler installed on your system in order to successfully run this code.
