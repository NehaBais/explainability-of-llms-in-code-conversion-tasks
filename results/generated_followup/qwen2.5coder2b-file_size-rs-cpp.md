The error message indicates that the `std::filesystem` namespace was not declared in the code. To fix this issue, we need to include the `<filesystem>` header at the beginning of our C++ program.

```cpp
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Error: No file name supplied" << std::endl;
    return 1;
  }

  std::string filename = argv[1];
  try {
    // Get metadata of the file
    std::filesystem::path full_path(filename);
    if (!std::filesystem::exists(full_path)) {
      std::cerr << "Error: File not found" << std::endl;
      return 2;
    }

    std::filesystem::file_status status = std::filesystem::status(full_path);

    // Print the size of the file
    std::cout << "Size of " << filename << " is " << status.size() << " bytes"
              << std::endl;

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 3;
  }

  return 0;
}
```
