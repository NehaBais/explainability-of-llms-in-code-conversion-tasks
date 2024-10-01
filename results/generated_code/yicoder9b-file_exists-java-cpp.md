In C++, you can use the `boost::filesystem` library to check if a file or directory exists. Here's how your code might look:

```cpp
#include <iostream>
#include <boost/filesystem.hpp>

int main() {
    namespace fs = boost::filesystem;

    // For the current working directory and a file in 'docs' directory
    fs::path p("docs/input.txt");
    if (fs::exists(p)) {
        std::cout << "File exists in the current directory\n";
    } else {
        std::cout << "File does not exist in the current directory\n";
    }

    // For root directory and a file 'input.txt' in 'docs' sub-directory
    fs::path p_root("/docs/input.txt");
    if (fs::exists(p_root)) {
        std::cout << "File exists at the root directory\n";
    } else {
        std::cout << "File does not exist in the root directory\n";
    }
    return 0;
}
```

This code checks if a file called 'input.txt' inside a 'docs' directory exists both for current working directory and for the filesystem root.
