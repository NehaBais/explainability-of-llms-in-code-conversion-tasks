Below is the C++ version of your code.
```cpp
#include <iostream>
#include <string>
#include <vector>
#include <filesystem>

namespace fs = std::filesystem;

void createPath(const std::string& path) {
    fs::path dir(path);
    std::vector<fs::path> dirsToCreate;

    for (auto i = dir.begin(); i != dir.end(); ++i)
        dirsToCreate.push_back(*i);

    fs::path builtPath;
    for(const auto& subDir : dirsToCreate) {
        builtPath /= subDir;
        if (! fs::exists(builtPath)) 
            fs::create_directory(builtPath);
        else if (! fs::is_directory(builtPath)) {
           std::cerr << "Cannot create directory: "<< builtPath.string() << std::endl;
           exit (1);
        }  
    } 
}

int main( int argc, char* argv[] ) {
    if(argc != 2) {
        std::cerr << "Usage: "<< argv[0] <<" <path>\n";
        exit (1);   
    }
    createPath(argv[1]);
    return 0;  
}
```
