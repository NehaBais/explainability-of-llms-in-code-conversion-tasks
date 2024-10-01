
Here's the C++ equivalent of the Rust code:
```
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";

int main() {
    create(".", "/");
    return 0;
}

void create(std::string root, std::string path) {
    std::filesystem::path f_path = root + "/" + FILE_NAME;
    std::filesystem::path d_path = root + "/" + DIR_NAME;
    try {
        std::ofstream file(f_path, std::ios::out);
        std::filesystem::create_directory(d_path);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        exit(1);
    }
}
```
Note that the `use` statements have been removed, as they are not necessary in C++. Also, the `const` keyword has been added to the constant strings to make them constant expressions.

The `main` function is similar to the Rust version, it calls the `create` function twice with different arguments and returns 0.

The `create` function takes two string arguments, the first one is the root directory path and the second one is the file path. It concatenates them using the `/` operator and then creates a new directory and file in that location using the `std::filesystem::create_directory` and `std::ofstream` functions respectively.

The `error_handler` function has been removed, as it is not needed in C++.
