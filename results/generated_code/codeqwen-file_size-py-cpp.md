In C++, you can use the `filesystem` library to retrieve the size of a file. Here's how you could modify your code:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::cout << "Size of 'input.txt': " << std::filesystem::file_size("./input.txt") << "\n";
    std::cout << "Size of '/input.txt': " << std::filesystem::file_size("/input.txt") << "\n";

    return 0;
}
```

This code will print out the size of the files `./input.txt` and `/input.txt`. Note that in C++ you need to provide the full path when accessing a file located outside the current working directory.

Remember, to compile this with a compiler like `g++`, which supports C++17 or higher, using the `-lstdc++fs` option:

g++ -o size size.cpp -lstdc++fs
./size

Also note that, `std::filesystem::file_size()` throws an exception if the file does not exist or is not a regular file. You might want to add some error handling code for robustness.
