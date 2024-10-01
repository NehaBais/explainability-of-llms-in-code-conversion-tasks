Below is your JavaScript code converted to C++ using the `filesystem` library (available from C++17 onwards):

```C++
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {

    // Current File 
    fs::path currentFilePath("input.txt");
    std::cout << "Size of input.txt in the working directory: " << fs::file_size(currentFilePath) << "\n";
  
    // Root File
    fs::path rootFilePath("/input.txt"));
    if (fs::exists(rootFilePath)) {
        std::cout << "Size of input.txt in the root directory: " << fs::file_size(rootFilePath) << "\n";
    } else {
        std::cout << "File input.txt does not exist in the file system root.\n";
    }

    return 0;
}
```
This program will print out the size of `input.txt` in the working directory, and also if it exists in the root directory, the size of the file as well.
  
Please note that you need to handle exceptions properly when using filesystem library (available from C++17 onwards). This example does not include exception handling for simplicity purposes.
