The errors are due to the fact that `std::filesystem`, which is part of C++17 standard library, isn't recognized in this environment or possibly because it wasn't properly included/linked during compilation. 

In order to correct these errors and ensure proper usage of `std::filesystem`, you should include the necessary header files (in this case: `<filesystem>`) and link against the necessary library (`-lstdc++fs`) when compiling your code. 

Below is a corrected version of your C++ code:

```cpp
#include <filesystem>
#include <fstream>
#include <iostream>

int main() {
  try {
    std::ofstream("output.txt"); // Creates or truncates the file to 0 bytes in the current working directory
    char sep = std::filesystem::path::preferred_separator; // gets the preferred separator ('/' on Unix, '\' on Windows)
    std::ofstream(sep + "output.txt"); // Creates or truncates the file to 0 bytes at root
    std::filesystem::create_directory("docs"); // creates an empty directory called 'docs' in the current working directory
    std::filesystem::create_directory(sep + "docs"); // creates an empty directory at root
  } catch (const std::exception &e) {
    std::cerr << e.what()
              << '\n'; // prints the error message if any exception is thrown while creating files or directories.
                       // prints the error message if any exception is thrown while creating files or directories.
  }
  return 0;
}
```
