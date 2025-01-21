The error is due to the use of the `basename` function, which is not declared in the scope of the program. It is an external function that is part of the POSIX library, but it needs to be included using a `#include <libgen.h>` statement before it can be used.

The fix is to add the necessary `#include <libgen.h>` statement at the beginning of the file:

Here's the corrected code:
```cpp
#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>
#include <libgen.h> // added include statement for basename function

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << basename(argv[0]) << " <path>\n";
    return 1;
  }

  std::string path = argv[1];
  std::string parent_path;
  size_t pos = path.find_last_of('/');
  if (pos != std::string::npos) {
    parent_path = path.substr(0, pos);
  }

  struct stat statBuf;
  if (stat(parent_path.c_str(), &statBuf) == -1) {
    mkdir(parent_path.c_str(), 0755);
  } else if (!S_ISDIR(statBuf.st_mode)) {
    std::cerr << "Couldn't create directory: " << parent_path << "\n";
    return 1;
  }

  mkdir(path.c_str(), 0755);
  return 0;
}
```
