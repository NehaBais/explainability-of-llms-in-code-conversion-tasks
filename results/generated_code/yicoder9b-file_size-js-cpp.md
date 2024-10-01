C++ doesn't have built-in support for working with files directly like ActiveXObject in JavaScript, so you will need to use the standard C++ `<filesystem>` library instead. 

Here is how you can do it:
```cpp
#include <filesystem>
#include <iostream>

int main() {
    namespace fs = std::filesystem;

    try {
        auto size1 = fs::file_size("input.txt");
        std::cout << "Size of input.txt: " << size1 << " bytes\n";

        // Note that this will fail if you are not running as an administrator 
        // or the file does not exist in root directory, etc.
        auto size2 = fs::file_size("C:\\input.txt");
        std::cout << "Size of C:\\input.txt: " << size2 << " bytes\n";
    } catch (const std::filesystem::filesystem_error& err) {
        // Handle any errors that occurred when getting file sizes
        std::cerr << err.what() << '\n';
    }

    return 0;
}
```
This C++ code does the same thing as your JavaScript example - it gets the size of "input.txt" in the current directory and the root directory, and prints these sizes to the console. If any errors occur when getting file sizes (for example if a file doesn't exist or access is denied), these error messages are printed to `stderr` instead. 

Make sure you have the appropriate permissions (`read`, `write` etc.) for the files and directories you are accessing, otherwise `file_size()` will throw an exception.
