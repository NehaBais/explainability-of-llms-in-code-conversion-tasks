 Sure! Below is the equivalent C++ code to achieve the same functionality as the provided Python script:

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

void create(const std::string& directory) {
    // Create an empty file "output.txt" in the specified directory
    std::ofstream outFile(directory + "/output.txt");
    
    // Create an empty directory "docs" in the specified directory
    fs::create_directory(fs::path(directory) / "docs");
}

int main() {
    create("."); // current directory
    create("/"); // root directory
    return 0;
}
```

### Explanation:
1. **Namespace Alias**: We use `namespace fs = std::filesystem` to alias the filesystem namespace for easier usage.
2. **File Creation**: We use `std::ofstream` to create an empty file named "output.txt" in the specified directory. If the directory does not exist, this will throw an exception, so make sure you have appropriate permissions and that the parent directories are created if needed.
3. **Directory Creation**: We use `fs::create_directory` to create a new directory named "docs" inside the specified directory.
4. **Function Call**: The function `create` is called twice: once with the current working directory (`.`) and once with the root directory (`/`).

### Notes:
- Ensure you have C++17 or later to use `<filesystem>` library.
- Make sure your environment allows file creation, especially in the root directory.
