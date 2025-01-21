The errors are due to not properly declaring the namespace for `std::filesystem`. The correct way is:
```cpp
#include <filesystem>
#include <system_error> // std::error_code

namespace fs = std::filesystem;

void mkdir_p(const fs::path &p) {
  std::error_code ec;
  fs::create_directories(p, ec); // create all directories in the path

  if (ec)
    throw std::system_error(
        ec, "creating directories: " +
                p.string()); // throw an exception if any error occurs
}
```
