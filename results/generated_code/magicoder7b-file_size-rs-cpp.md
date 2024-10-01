 In C++, we can use the `filesystem` library available from c++17 onwards. Here's how you could re-implement this code in C++:

```cpp
#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <system_error>
#include <filesystem>

void exit_err(const std::string& msg, int code) {
    std::cerr << "Error: " << msg << std::endl;
    std::exit(code);
}

int main() {
    std::string file_name = "input.txt";
    // Get the current working directory
    auto cwd = std::filesystem::current_path();

    try {
        // Create a path from the filename and CWD
        std::filesystem::path p(cwd / file_name);
        // Check if file exists
        if (!std::filesystem::exists(p)) {
            exit_err("File does not exist", 1);
        } else {
            auto sz = std::filesystem::file_size(p);
            std::cout << "Size of " << p.filename() << " is " << sz << " bytes" << std::endl;
        }
    } catch (std::system_error& e) {
       exit_err(e.what(), 2); 
    }
    
    return 0;
}
```
This code opens the file specified by `file_name`, calculates its size, and outputs it in bytes. If any error occurs during this process (for example, if the file does not exist), it prints an error message to stderr and exits with a specific exit code.
