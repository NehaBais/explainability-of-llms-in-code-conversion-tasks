The error in this case is that the Boost library, which includes the required file `boost/filesystem.hpp`, was not found during compilation.

To fix this issue, make sure to link against the Boost library correctly during the compilation process.

Corrected C++ Code:
```cpp
#include <iostream>

void mkdirp(const std::string &path) {
  try {
    boost::filesystem::create_directories(boost::filesystem::path(path))));

    std::cout << "Directory created successfully!" << std::endl;
  } catch (const boost::filesystem::filesystem_error &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}
```
Note that the error in this case was a missing library (`boost`) which resulted in compilation failure. To resolve this issue, ensure to link against the Boost library during the compilation process.
