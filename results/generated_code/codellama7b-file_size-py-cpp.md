In C++, you can use the `std::filesystem` library to perform the same task as the Python code. Here's an example of how you could rewrite the code in C++:
```
#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path input_file = "input.txt";
    auto size1 = std::filesystem::file_size(input_file);

    std::filesystem::path root_input_file = "/input.txt";
    auto size2 = std::filesystem::file_size(root_input_file);

    std::cout << "The size of input.txt in the current working directory is: " << size1 << std::endl;
    std::cout << "The size of /input.txt in the file system root is: " << size2 << std::endl;

    return 0;
}
```
This code uses the `std::filesystem::file_size()` function to get the size of the files, and then prints them to the console using `std::cout`. The `auto` keyword is used to automatically deduce the type of the variable from the initializer.

Note that this code assumes that the file "input.txt" exists in both the current working directory and the file system root. If the file only exists in one location, you can use the appropriate path for the `std::filesystem::path` object to match the location of the file.
