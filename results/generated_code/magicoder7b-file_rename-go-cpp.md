 The C++ equivalent of the provided Golang code would be as follows:

```cpp
#include <iostream>
#include <system_error>
#include <filesystem>

int main() {
    try {
        std::rename("input.txt", "output.txt");
        std::rename("docs", "mydocs");
        
        // This requires root privileges
        // On Windows, you need to run as administrator 
        // On Unix-like systems, you typically use sudo or a similar command to run with root permissions
        std::filesystem::rename("/input.txt", "/output.txt");
        std::filesystem::rename("/docs", "/mydocs");
    }
    catch(const std::error_code &ec) {
        std::cerr << "Error: " << ec.message() << "\n";
        return 1;
    }
    
    return 0;
}
```
Please note that the second pair of `std::rename` calls are typically executed with root privileges or administrator privileges on Unix-like systems, and might throw an error if you don't have enough permissions. Also, the paths "/input.txt" and "/docs" are absolute paths, which means they are relative to the filesystem root (also known as the root directory).
