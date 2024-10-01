 The equivalent C++ code would be:

```cpp
#include <iostream>
#include <fstream>
#include <dirent.h>

int main() {
    try {
        // Create file in the current working directory
        std::ofstream output("output.txt");
        if (!output) throw std::runtime_error("Unable to create 'output.txt'.");
        output.close();

        // Create a new directory "docs" in the root of the filesystem
        mkdir("/docs", 0755);
        
        // Create file in the root of the filesystem
        std::ofstream output2("/output.txt");
        if (!output2) throw std::runtime_error("Unable to create '/output.txt'.");
        output2.close();

        // Create directory "docs" in the root of the filesystem
        mkdir("/root/docs", 0755);
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
```
Note: The `mkdir` function is used to create a directory, and the second argument is permission (octal). If you want to create multiple directories with subdirectories, you'll need to use `std::filesystem::create_directory`.
