Here is the converted code from C to C++:

```C++
#include <iostream>
#include <filesystem>

int main(void)
{
    std::filesystem::path file1("input.txt");
    std::filesystem::path file2("/input.txt");

    if (std::filesystem::exists(file1)) {
        auto size = std::filesystem::file_size(file1);
        std::cout << size << std::endl;
    } else {
        std::cerr << "File 1 does not exist" << std::endl;
    }

    if (std::filesystem::exists(file2)) {
        auto size = std::filesystem::file_size(file2);
        std::cout << size << std::endl;
    } else {
        std::cerr << "File 2 does not exist" << std::endl;
    }

    return 0;
}
```

This code snippet uses C++'s filesystem library to verify the existence and size of both files, input.txt and /input.txt respectively. If the file exists, it prints its size in bytes. If the file does not exist, it outputs an error message. The `std::filesystem::path` is used to represent file paths and `std::filesystem::file_size` returns the size of a file in bytes.
