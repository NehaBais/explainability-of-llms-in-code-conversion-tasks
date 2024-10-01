```cpp
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
namespace fs = std::filesystem;

int main() {
    auto file_name  = std::string{""}; // Assume the input is valid, but we can check later
    if (argc > 1) {
        file_name = std::string(argv[1]);
    } else {
        exit_err("No file name supplied", 1);
    }

    auto metadata = fs::file_size(file_name); // This method returns an optional value, so we need to handle it
    if (!metadata) {
        exit_err<std::string>("File not found: " + file_name, 2);
    }
    
    std::cout << "Size of file.txt is " << *metadata << " bytes\n";

    return 0;
}
```
