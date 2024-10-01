In C++, you can use the `std::filesystem` library to perform file and directory operations. However, it is important to note that not all systems have this library available. Here's how you could convert your Python code to C++:

Python Code:

import os

os.rename("input.txt", "output.txt")
os.rename("docs", "mydocs")

os.rename(os.sep + "input.txt", os.sep + "output.txt")
os.rename(os.sep + "docs", os.sep + "mydocs")


C++ Code:

```cpp
#include <filesystem>

int main() {
    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("docs", "mydocs");

    // for files in root directory
    std::string root = "/";  // Replace with your desired root directory
    std::filesystem::rename(root + "input.txt", root + "output.txt");
    std::filesystem::rename(root + "docs", root + "mydocs");

    return 0;
}
```

This C++ code uses the `std::filesystem::rename()` function to rename the files or directories. The first parameter is the old name, and the second parameter is the new name.

Please replace "/" with your desired root directory.
