The following is a C++ code equivalent to the given JavaScript snippet: 

```cpp
#include <filesystem>
#include <iostream>

int main() {
    // For current working directory
    if (std::filesystem::exists("input.txt")) 
        std::cout << "File exists in the current directory!\n";
    else 
        std::cout << "File does not exist in the current directory!\n";

    if (std::filesystem::exists("docs"))
        std::cout << "Directory exists in the current directory!\n";
    else
        std::cout << "Directory does not exist in the current directory!\n";

    // For file and directory in root of filesystem. 
    if (std::filesystem::exists("c:\\input.txt")) 
        std::cout << "File exists in root directory!\n";
    else 
        std::cout << "File does not exist in the root directory!\n";
    
    if (std::filesystem::exists("c:\\docs")) 
        std::cout << "Directory exists in root directory!\n";
    else 
        std::cout << "Directory does not exist in the root directory!\n";  
}
```
The `<filesystem>` library is used to perform file and directory operations. The functions `exists()` checks if a file or directory exists at the specified location.
