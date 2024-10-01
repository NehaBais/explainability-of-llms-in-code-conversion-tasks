 Below is the C++ version of your code. It does basically the same thing but uses `boost::filesystem` library for cross-platform file operations:

```cpp
#include <boost/filesystem.hpp>
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <path>\n";
        return 1;
    }

    boost::filesystem::path p(argv[1]);
    while (!p.empty()) {
        if (boost::filesystem::exists(p)) {
            if(!boost::filesystem::is_directory(p)) {
                std::cerr << "Could not create directory '" 
                          << argv[1] 
                          << "' as a file with the same name exists.\n";
                return 1;
            }
        } else {
            boost::system::error_code ec;
            boost::filesystem::create_directories(p, ec);
            
            if (ec) {
                std::cerr << "Could not create directory '" 
                          << argv[1] 
                          << "' due to the following error: " 
                          << ec.message() << "\n";
                return 1;
            }
        }
        
        p = p.parent_path();
    }
    
    std::cout << "Directory '" << argv[1] << "' was successfully created.\n";
    
    return 0;
}
```

This version of the code does exactly what your C version is doing: if a directory does not exist, it creates one. If it already exists and it's not a directory (e.g., a file with the same name), then an error message will be printed out and the function will return `1`. Otherwise, nothing happens.

In the case where directories do not exist but they are created successfully, a success message is printed out to the console.
