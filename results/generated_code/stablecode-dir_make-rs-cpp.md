The equivalent code in C++ would be:

```C++
#include <filesystem>
#include <iostream>

void createDirectories(const std::string& path) {
    std::filesystem::path fsPath(path);

    if (fsPath.exists() && !fsPath.is_directory()) {
        std::cerr << "Error: Path already exists and is not a directory." << '\n';
        return;
    }

    try {
        std::filesystem::create_directories(fsPath);
    } catch (const std::exception& e) {
        std::cerr << "Error during directory creation: " << e.what() << '\n';
        return;
    }
    std::cout << "Directories created successfully at path - " << fsPath <<'\n';  
}


int main(){ 
    createDirectories("./path/to/dir");
    return 0; 
}
```
This C++ code creates a directory and any missing parents, just like the `mkdir -p` command in POSIX. It uses the `<filesystem>` library introduced in C++17. If the directory already exists or is successfully created, it returns successfully. 

Please note that to use filesystem library need to compile on gnu++11 or higher. To do so you will have to edit your CMakeLists.txt file and add these lines:

if(NOT COMPILED_WITH_CXX17)
    set( COMPILED_WITH_CXX17 1 )
endif()

string(
    REPLACE 
        "${CMAKE_CXX_STANDARD} or higher" 
            "11 or higher"
    PROJECT_BATCH_COMMAND)

set (CMAKE_CXX_STANDARD 17)

Remember that filesystem library is available only in C++17 standard, hence you have to specify it while compiling the program.
This will work equally well on all platforms supported by the Rust compiler and C++11 or higher standard.
