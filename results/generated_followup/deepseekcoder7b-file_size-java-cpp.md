The error message "`'experimental/filesystem' file not found`" is because the compiler cannot find the `<experimental/filesystem>` header which means that it does not support C++17 filesystem library. 

The fix would be to use `#include <filesystem>` without any namespace qualification, as this should work with most compilers supporting at least C++17 (like GCC and Clang). However, if you are using an older compiler that does not support it, or your system has no filesystem library installed, then there is no way to make the code compile.

Here's the corrected code:
```cpp
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main() {
    fs::path fileA("file.txt");
    if (fs::exists(fileA))
        std::cout << "File size of file.txt: " << fs::file_size(fileA) << " B" << std::endl;
    else
        std::cerr << "File does not exist." << std::endl;
        
    fs::path fileB("/file.txt");  // Be aware that this might need root access to be able to read the file from system's root directory.
    if (fs::exists(fileB))
        std::cout << "File size of /file.txt: " << fs::file<｜begin▁of▁sentence｜>iz(fileB) << " B" << std::endl;
    else
        std::cerr << "/File does not exist." << std::endl;
        
    return 0;
}
```

