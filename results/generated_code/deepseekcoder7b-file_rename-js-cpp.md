To perform the file and directory operations in C++, you'll use the standard library functions from the `filesystem` header of the C++17 standard (which is available starting with gcc version 8.0). The equivalent code to your JavaScript code would be:
```c++
#include <iostream>
#include <fstream>
#include <experimental/filesystem>

namespace fs = std::experimental::filesystem;

int main() {
    // move file "input.txt" to "output.txt" in current directory and root directory
    fs::rename("input.txt", "output.txt");
    fs::rename("/input.txt", "/output.txt"); 

    // move folder "docs" to "mydocs" in the current directory and root directory
    fs::rename("docs", "mydocs");
    fs::rename("/docs", "/mydocs"); 
    
    return 0;
}
```
This C++ code does the same operations as your JavaScript, renames files and directories. 

It should be noted that if we are working with a filesystem root ("/" in Unix systems or "C:\" on Windows), it's necessary to use absolute paths instead of relative ones for the `fs::rename()` function.

Finally, do note that this code assumes you have sufficient permissions to perform these operations and that the files/directories exist before they are moved. Error checking would need to be added if not. 

Also, in a Windows environment running on cmd, it's important to run the compiled exe file with administrator rights as normal user may not have enough privileges to rename system files or folders.

