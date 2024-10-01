Below is the C++ version of your Python code:

In order to create a file in C++ you will need to open it and close it, creating an empty file. For directories you can use the `mkdir` function from the `cstdlib` library. Please note that C++17 or later is required for the filesystem library. 

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

void create(fs::path directory) {
    std::ofstream file(directory / "output.txt");
    file.close();
   
    try {
        fs::create_directory(directory / "docs"); 
    } catch (const fs::filesystem_error& e) {
        std::cout <<  e.what() << std::endl;
    }
}

int main() {
    create("."); // current directory
    if constexpr (fs::path::string_type::value_type == '\\') 
        // For Windows you need to specify the root as "C:\\" not just "/"
        create("C:\\");  // root directory
    else
        create("/"); // root directory for Unix based systems.
}
```
Please note, the Python code and C++ code handle the creation of directories in different ways due to differences between filesystems. The Python version creates a new directory in the specified path regardless if it exists or not. In contrast, the C++ version only tries to create a directory if it does not exist already, otherwise an exception is thrown which can be caught and handled.
