The following C++ code accomplishes the same task as the given Rust code:

```cpp
#include <iostream>
#include <filesystem>

int main() {
  for (const auto & entry : std::filesystem::directory_iterator("./")) {
    std::string file = entry.path().filename();
    if (file == "input.txt" || file == "docs") {
      std::cout << file << " exists and is ";
      if (entry.is_directory()) {
        std::cout << "a directory";
      } else {
        std::cout << "A file";
      }
      std::cout << std::endl;
    }
  }

  for (const auto & entry : std::filesystem::directory_iterator("/")) {
    std::string file = entry.path().filename();
    if (file == "input.txt" || file == "docs") {
      std::cout << file << " exists and is ";
      if (entry.is_directory()) {
        std::cout << "A directory";
      } else {
        std::cout << "A file";
      }
      std::cout << std::endl;
    }
  }

  return 0;
}
```

This code uses the `<filesystem>` library to iterate through directories. It checks if a directory or file's name is "input.txt" or "docs", and prints out whether it exists and whether it is a directory or file.

Keep in mind that this code requires C++17 support or later, as the `<filesystem>` library was introduced in C++17. Also note that due to differences between Unix-like systems (which use `/` as the root directory path) and Windows systems (which use `\`), file paths are parsed from the current working directory by using a relative path `./`, but for absolute paths, a slash is used instead of backslash.
