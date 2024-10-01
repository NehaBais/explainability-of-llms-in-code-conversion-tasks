The equivalent C++ code for the given Golang code would look like this:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {

    // Renaming in current working directory 
    fs::rename("input.txt", "output.txt");
    fs::rename("docs", "mydocs");

    // Renaming in filesystem root
    fs::path root("/");
    fs::rename(root / "input.txt", root / "output.txt"));
    fs::rename(root / "docs", root / "mydocs");
  
    return 0;
}
```

This C++ code performs the same renaming operations as the original Golang code:
- It renames `input.txt` to `output.txt`, and then it renames the `docs` directory into `mydocs`.
- This operation is performed twice, first in the current working directory and then in the filesystem root.
- The standard library's `filesystem` header (`<filesystem>`) provides all required functionality for file manipulation.
