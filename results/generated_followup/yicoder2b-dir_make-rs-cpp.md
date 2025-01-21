There are three main errors in this C++ code:

1) `auto` type specifier is not allowed in standard C++ (previously known as C99 or C11), so we need to specify the types of the variables manually.
2) The file system operations in C++ do not have a direct equivalent in Rust. Rust's `fs::create_dir_all` method creates all directories needed to contain the specified path. In C++, we would have to manually create each directory as required by its relative path.
3) A range-based for loop is not allowed in standard C++ either (it was introduced in C++11), so I'm assuming that Rust has this functionality built-in and you can skip the following lines.

Here's how it would look with the fixed code:

```cpp
#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>  // Include to use filesystem features

int main() {
    const std::string path = "./path/to/dir";
    auto split_path = path.split('/'); // Split the path by '/'

    std::vector<std::string> folders_to_create;
    for (size_t i = 1; i < split_path.size(); ++i) {
        folders_to_create.push_back(split_path[i]); // Get all directories required to create the path
    }

    std::string currentDir = "";
    for (const auto &folder : folders_to_create) {  // Loop over each folder to create
        currentDir += folder + "/";                 // Concatenate with a '/'
        if (!std::filesystem::exists(currentDir)) {   // Check if the directory already exists
            try {
                std::filesystem::create_directory(currentDir);  // If not, create it
            } catch (const std::exception &e) {              // Catch any errors that may occur
                std::cerr << "An Error Occured: " << e.what() << '\n'; // And print the error message to stderr
                return -1;  // Exit with an error code, you may handle this differently in your application
            }
        }
    }

    return 0;
}
```
