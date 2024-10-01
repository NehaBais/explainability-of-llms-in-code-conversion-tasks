To convert the Java code to C++, you would need to replace the necessary libraries and functions with their equivalents in C++. Here is the converted C++ code:
```
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
int main()  {
    try {
        if (fs::create_directories("C:/parent/test"))
            std::cout << "path successfully created";
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}
```
In this code, we include the necessary header file `filesystem` from the `<filesystem>` standard library and use the `std::filesystem` namespace for brevity. The main function attempts to create a directory named "C:/parent/test". If successful, it prints "path successfully created" using `std::cout`. In case of any exception, it is caught in the `catch` block, and an error message is printed using `std::cerr`.
Note that this code uses modern C++ features like `std::filesystem` and doesn't include the older deprecated POSIX file system functions. Additionally, you may need to adjust the paths depending on your specific operating system and environment settings.
