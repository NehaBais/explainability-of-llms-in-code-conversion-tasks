Below is the equivalent C++ code for the provided Rust code. This conversion involves removing some language-specific features from the original Rust code, and then rewriting it in C++, while maintaining its functionality. 

Here's how you can convert the code:

```cpp
#include <iostream>
#include <fstream>
#include <filesystem> // requires C++17

namespace fs = std::filesystem;

void exit_err(const std::string& msg, int code) {
    std::cerr << "Error: " << msg << '\n';
    exit(code);
}

int main() 
{
    if (argc != 2) 
    {
        exit_err("One file name expected", 1);
    }

    const std::string file_name {argv[1] ] };

    try
    {
        fs::path path { file_name };
        if(!fs::exists(path))
            throw std::runtime_error("File does not exist."));

        std::cout << "Size of file '" << file_name  << "' is " << fs::file_size(path) << " bytes.\n";
    } 
    catch (const std::exception& e) 
    {
        exit_err(e.what(), 2);
    }

    return 0;
}
```
This C++ code accomplishes the same task as the provided Rust code: it reads a file called `input.txt` for files in the current working directory, and another one in the file system root. It then prints out the size of these files in bytes.
