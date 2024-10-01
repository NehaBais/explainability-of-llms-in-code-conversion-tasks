Below is the equivalent C++ code for your Golang script: 

```cpp
#include <cstdlib>
int main() {
    // Rename file in current working directory
    if(rename("input.txt", "output.txt") == 0) {
        std::cout << "File renamed successfully!\n";
    } else {
        std::cout << "Failed to rename the file!\n";
    }
  
   // Rename directory in current working directory
   if(rename("docs", "mydocs") == 0) {
       std::cout << "Directory renamed successfully!\n";
   } else {
       std::cout << "Failed to rename the directory!\n";
    }
  
    // Rename file at root directory
    if(rename("/input.txt", "/output.txt") == 0) {
        std::cout << "File renamed successfully in root directory!\n";
    } else {
        std::cout << "Failed to rename the file in root directory!\n";
    }
  
   // Rename directory at root directory
   if(rename("/docs", "/mydocs") == 0) {
       std::cout << "Directory renamed successfully in root directory!\n";
   } else {
       std::cout << "Failed to rename the directory in root directory!\n";
    }  
    return 0;
}
```

In C++, we use standard library function `rename()` for renaming files and directories. This function takes two parameters: source file/directory name and destination file/directory name respectively. If the operation is successful, it returns zero otherwise non-zero value.

Please note that executing this code in a Linux environment requires appropriate permissions to rename directories or files in any directory including root directory (sudo might be required).
