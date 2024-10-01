Below is the equivalent C++ code for renaming files and directories. 

```cpp
#include <iostream>
#include <cstdlib> // For function "remove"
#include <dirent.h> // For function "opendir"

bool renameFile(const char* oldname, const char* newname) {
    return std::rename(oldname, newname) == 0;
}

void test(const char* type, const char* oldname, const char* newname){
    std::cout << "The following " << type << " called '" << oldname << "' ";
    if (renameFile(oldname,newname)){
        std::cout << "was renamed as '"; 
    } else {
        std::cout << "could not be renamed into '"; 
    }
    std::cout << newname << "'.\n";  
}

int main(){
    test("file", "input.txt", "output.txt");
    // If the file is located at root directory, uncomment this line: 
    // test("file", "/" "input.txt", "/" "output.txt");
    test("directory", "docs", "mydocs");
    // If the directory is located at root directory, uncomment this line:
    // test("directory", "/" "docs", "/" "mydocs"); 
    return 0;  
}   
```
Please be aware that the rename function might not be supported on all filesystems. Also note that the C++ standard does not specify whether it is the responsibility of rename to check if newname refers to an existing file or directory. If a file or directory with newname exists, the behavior depends on the implementation and can result in undefined behavior. It may work as intended (overwrite the old file/directory), it might fail, or it might delete the new file/directory without warning.
