Below is the equivalent C++ code for your Rust program. In this implementation, we use the `std::experimental` filesystem library to deal with creating files and directories in different locations.

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;
const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";

void create(const std::string& root) {
    std::error_code ec;

    // Create the directory in the specified root
    if (!fs::exists(root + "/" + DIR_NAME, ec)) fs::create_directory(root + "/" + DIR_NAME, ec);

    // Create the file in the specified root if it does not exist
    std::ofstream outfile(root + "/" + FILE_NAME, std::ios::out);
    if (!outfile.is_open()) {
        std::cerr << "Error: Could not open/create file in \"" << root << "\" directory.\n";
        exit(EXIT_FAILURE);
    }
}

int main() {
    // Create files and directories in the current working directory
    create(".");

    // Create files and directories in the filesystem root
    // This requires administrator rights
    // Uncomment following line if you have appropriate permissions
    // create("/");

    return 0;
}
```

Please note that creating a file or directory in the root (`/`) of your filesystem usually needs administrator (root) privileges. If you don't have such permissions, uncommenting the corresponding `create("/")` call will cause an error.
