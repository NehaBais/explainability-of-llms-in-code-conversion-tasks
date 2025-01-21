 The error occurred because C++17 introduced the `std::filesystem` library, which provides functions for creating, manipulating, and querying file system paths and file statuses. However, in my code, I tried to use `std::filesystem::path`, but there's no member named "filesystem" in namespace 'std'.

The fix is simply to add the correct library: `#include <filesystem>`. Now it should work fine because `std::filesystem` has been included.

Here is my corrected code:
```cpp
#include <filesystem>
#include <iostream>

int main() {
  std::string inputFileName = "input.txt";

  // Get the current working directory.
  std::filesystem::path cwd = std::filesystem::current_path();

  // Get the size of file in the current directory.
  auto cwdFileSize = std::filesystem::file_size(cwd / inputFileName);
  std::cout << "Size of file " << inputFileName
            << " in the current working directory: " << cwdFileSize << " bytes"
            << std::endl;

  // Get the size of file at root.
  auto rootFileSize = std::filesystem::file_size("/" + inputFileName);
  std::cout << "Size of file " << inputFileName
            << " in the root directory: " << rootFileSize << " bytes"
            << std::endl;

  return 0;
}
```
