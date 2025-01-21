```cpp
#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: No file name supplied" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    try {
        // Get metadata of the file
        std::filesystem::path full_path(filename);
        if (!std::filesystem::exists(full_path)) {
            std::cerr << "Error: File not found" << std::endl;
            return 2;
        }

        std::filesystem::file_status status = std::filesystem::status(full_path);

        // Print the size of the file
        std::cout << "Size of " << filename << " is " << status.size() << " bytes" << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 3;
    }

    return 0;
}
```

In this C++ program, we use the `<iostream>` library to print to the console. The `<fstream>` library is used for file I/O operations and the `<filesystem>` library provides functionality for working with files and directories.

The `main` function checks if a filename was provided as a command line argument. If not, it prints an error message and exits with code 1.

If a filename was provided, the program attempts to open the file using `std::ifstream`. If the file does not exist, it prints an error message and exits with code 2.

Otherwise, it retrieves the size of the file using the `status().size()` method and prints it to the console. If any exceptions occur during this process, they are caught and printed to the standard error stream, and the program exits with code 3.
