 The equivalent C++ code would be:

```cpp
#include <iostream>
#include <filesystem>

int main(){
    std::cout << "Size of 'input.txt' in the current directory: " << 
                std::filesystem::file_size("input.txt") << '\n';
    
    std::cout << "Size of '/input.txt' in the root file system: " << 
                std::filesystem::file_size("/input.txt") << '\n';

    return 0;
}
```

Please note that in C++, you need to include `<filesystem>` header for file operations like `std::filesystem::file_size`. Also, you should know that, in Unix-based systems (like Linux and MacOS), the root directory is "/". So if you want a file in root level, specify it as "/input.txt", but note that this may not be possible on some filesystems/partitions due to security restrictions.
