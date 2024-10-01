The provided Rust code is calculating the size of a file named "input.txt" in the current working directory or the file system root using the filesystem crate `fs` and environment variables to get the name of the file. Here's how you could translate this to C++:
```cpp
#include <iostream>
#include <fstream>
#include <cerrno>
#include <string>

int main() {
    const std::string filename = "input.txt";  // name of the file
    std::ifstream ifs(filename, std::ios_base::ate | std::ios_base::binary);

    if (!ifs.is_open()) {
        std::cerr << "Error: Could not open '" << filename << "'\n";
        return 2;  // signal error to calling code
    }

    size_t file_length = ifs.tellg();
    ifs.close();

    std::cout << "Size of '" << filename << "' is " << file_length << " bytes\n";

    return 0;  // signal successful completion to calling code
}
```
Please note that the `ate` flag is used with `ifstream::tellg()` to get a byte-count of the file, rather than counting the number of lines or other characters as in the Rust version. This is because C++ does not have a built-in way to do this kind of thing.
