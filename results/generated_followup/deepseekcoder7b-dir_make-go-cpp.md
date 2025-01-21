The error occurs because `std::filesystem` is not available on all compilers by default, especially C++17 standard introduced with later versions of GCC and Clang. It's also worth noting that some Linux distributions don't include it. To use the filesystem features you have to either turn on support for them in your compiler or link against an appropriate library like Boost.Filesystem.

The fix is to turn on support for C++17 filesystem in GCC by adding `-std=c++17` flag while compiling, as well as linking the correct libraries if needed. 

Here's the corrected code:
```cpp
#include <experimental/filesystem>
#include <iostream>

bool create_dir(const std::string &path) {
  try {
    if (!std::experimental::filesystem::exists(path)) {
      // create directory recursively
      std::experimental::filesystem::create_directories(path);
      return true;
    } else {
      // directory exists, so return false
      return false;
    }
  } catch (const std::experimental::filesystem::filesystem_error &e) {
    // Handle exception by logging it or ignore for now
    std::cout << e.what() << '\n';
  }
}
```
This code has the same functionality as before, but uses `std::experimental::filesystem` instead of `std::filesystem` to ensure compatibility across different platforms and compilers. Please note that you should use this namespace with caution because it is not finalized and might change in future versions or distributions of GCC/Clang.

