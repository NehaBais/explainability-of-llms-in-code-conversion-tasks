In C++ you can use `std::filesystem` for creating directories recursively. Here's how the equivalent code would look in C++17:

```cpp
#include <iostream>
#include <string>
#include <filesystem>
 
int main() {
    std::string path = "./path/to/dir";
    
    try {
        if(!std::filesystem::exists(path)) { // Check if directory exists
            std::filesystem::create_directories(path); // Create directories recursively 
        }
    } catch (const std::filesystem::filesystem_error& err) {
        std::cout << "Exception: " << err.what() << '\n';
   <｜begin▁of▁sentence｜>		return 1;<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>     
    }
    
    return 0;
}
```
This program first checks if the directory exists at path `./path/to/dir`, and if it doesn't exist then it attempts to create directories recursively using the `create_directories()` function from the standard filesystem library. Any exceptions that occur during this process are caught in a catch block and their error messages printed out.

