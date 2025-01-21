The error message indicates that the constants `S_IRWXU`, `S_IXGRP`, and `S_IROTH` are not declared, which is necessary to set the permissions for the directory. In C++, these constants are defined in `<sys/stat.h>`. 

To fix the code, you need to include this header file at the beginning of your source file:

```cpp
#include <cerrno>
#include <iostream>
#include <sys/stat.h>

bool createDir(const std::string &path) {
  if (mkdir(path.c_str(), S_IRWXU | S_IXGRP | S_IROTH)) {
    if (errno != EEXIST) {
      std::cerr << "Error creating directory: " << strerror(errno) << '\n';
      return false;
    }
  } else {
    return true;
  }
}

int main() {
  std::string path = "./path/to/dir";
  if (!createDir(path)) {
    std::cout << "Failed to create directory." << std::endl;
  } else {
    std::cout << "Directory created successfully." << std::endl;
  }

  return 0;
}
```

With the corrected code, you are now able to compile and run it on your system.
