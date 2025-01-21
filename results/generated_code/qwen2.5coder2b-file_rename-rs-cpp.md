In C++, the equivalent code would look like this:

```c++
#include <iostream>
#include <filesystem>

void rename_files() {
  std::filesystem::path path("input.txt");
  if (!std::filesystem::exists(path)) {
    throw std::runtime_error("Input file not found.");
  }
  
  std::filesystem::rename(path, "output.txt");
  
  path = "docs";
  if (!std::filesystem::exists(path)) {
    throw std::runtime_error("Docs directory not found.");
  }
  
  std::filesystem::rename(path, "mydocs");
}

int main() {
  try {
    rename_files();
    std::cout << "Files and directories successfully renamed.";
  } catch (const std::exception& e) {
    std::cerr << "Error: " << e.what() << '\n';
  }

  return 0;
}
```
This code makes use of C++17's filesystem library which includes the functionality for creating and manipulating files and directories on the file system. `std::filesystem::rename` is used to rename files and directories.
The main function calls the `rename_files` function and catches any exceptions that may be thrown during the process.

Please note that this code assumes that your environment has C++17 support, and that the directory structure you are trying to modify exists. If these assumptions aren't met, additional error handling may need to be added.
