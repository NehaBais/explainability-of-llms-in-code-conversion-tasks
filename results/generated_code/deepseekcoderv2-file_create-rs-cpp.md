 To convert the given Rust code to C++, we need to consider the differences in syntax and libraries between the two languages. Here's how you can achieve the same functionality in C++:

1. Use the `<filesystem>` library for file system operations.
2. Use standard C++ streams for input/output operations.
3. Handle errors using exceptions or return codes.

Here is the equivalent C++ code:

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";

void create(const std::string& root) {
    try {
        auto f_path = std::filesystem::path(root) / FILE_NAME;
        auto d_path = std::filesystem::path(root) / DIR_NAME;

        if (!std::filesystem::is_directory(d_path)) {
            std::filesystem::create_directory(d_path);
        }

        std::ofstream file(f_path, std::ios::trunc);
        if (file) {
            file.close();
        } else {
            throw std::runtime_error("Failed to create file: " + f_path.string());
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        std::exit(1);
    }
}

int main() {
    create(".");
    create("/");
    return 0;
}
```

### Explanation:

1. **Include Headers**: We include necessary headers for file system operations and standard streams.
2. **Constants**: Define constants as `std::string` since C++ does not have constant strings in the same way as Rust.
3. **create Function**: 
   - Constructs paths using the `/` operator from `std::filesystem::path`.
   - Checks if the directory exists, and creates it if it doesn't.
   - Opens a file stream for writing, truncating any existing content.
   - Handles exceptions by catching them and printing an error message before exiting with a non-zero code.
4. **main Function**: Calls the `create` function twice: once for the current working directory (`.`) and once for the root directory (`/`).

This C++ code should provide equivalent functionality to the provided Rust code, creating empty files and directories in specified locations.
