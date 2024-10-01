 Below is the equivalent C++ code for your Golang script:

```cpp
#include <iostream>
#include <fstream>
#include <cstdlib> // for system function

void createFile(const std::string& fn) {
    std::ofstream f(fn);
    if (!f.is_open()) {
        std::cerr << "Failed to open file: " << fn << '\n';
        return;
    }
    std::cout << "File '" << fn << "' created!" << std::endl;
}

void createDir(const std::string& dn) {
    int r = std::system("mkdir -p " + dn);
    if (r != 0) {
        std::cerr << "Failed to create directory: " << dn << '\n';
        return;
    }
    std::cout << "Directory '" << dn << "' created!" << std::endl;
}

int main() {
    createFile("input.txt");
    createFile("/input.txt"); // Note: This file will be created in the root directory. 
                              //       You may not have write access to this location.
    createDir("docs");
    createDir("/docs"); 
    return 0;
}
```
This C++ script does essentially the same thing as your Go script: it creates a new, empty file called "input.txt" and an empty directory called "docs". The difference here is that this version of the code uses std::ofstream for creating files instead of os.Create from Go. It also includes std::system calls to create directories.

Please note that C++ does not have a function equivalent to golang's `os.Mkdir`, so it is using the system command to create directories. And to make things work on Windows, you might need to install Cygwin and/or adjust the command arguments accordingly (since mkdir -p is Unix-specific).
