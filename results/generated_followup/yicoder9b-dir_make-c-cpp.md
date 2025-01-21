The errors are due to the use of C++11 features (such as `auto` type specifier, range-based for loops) that aren't being enabled in the compiler flags. The error messages also indicate incorrect usage of some filesystem library functions (`fs::exists()` and `fs::create_directory()`) which are not recognized because 'fs' namespace isn't properly declared.

The corrected code should look like this:
```cpp
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

namespace fs = std::filesystem;

void createPath(const std::string &path) {
  fs::path dir(path);
  std::vector<fs::path> dirsToCreate;

  for (auto i = dir.begin(); i != dir.end(); ++i)
    dirsToCreate.push_back(*i);

  fs::path builtPath;
  for (const auto &subDir : dirsToCreate) {
    builtPath /= subDir;
    if (!fs::exists(builtPath))
      fs::create_directory(builtPath);
    else if (!fs::is_directory(builtPath)) {
      std::cerr << "Cannot create directory: " << builtPath.string() 
                << std::endl;
      exit(1);
    }
  }
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <path>\n";
    exit(1);
  }
  createPath(argv[1]);
  return 0;
}
```
