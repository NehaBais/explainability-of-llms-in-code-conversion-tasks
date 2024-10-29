The equivalent C++ code would be as follows, using the c++17 filesystem library for handling file and directory operations:

```c++
#include <filesystem>

int main() {
    try {
        std::filesystem::path current_dir = std::filesystem::current_path();
        std::filesystem::create_directory(current_dir / "docs");
        std::ofstream outFile1((current_dir / "output.txt").string());
        outFile1.close(); 
          
        std::filesystem::path root_dir = std::filesystem::v1::root_name();
        std::filesystem::create_directory(root_dir / "docs");  
        std::ofstream outFile2((root_dir / "output.txt").string());
        outFile2.close(); 
    } catch (std::filesystem::filesystem_error & e) {
         std::cerr << e.what() << '\n';
     }
    return 0;
}
```
Please note that in C++, unlike Java, there is no explicit way to create a file of zero bytes so we are creating an empty txt file as per requirement. Also please be aware `std::filesystem` is not supported by all compilers (like some very old ones). It was introduced with c++17 and it will work on recent versions of gcc, msvc and clang but for other you'll need to use boost or similar libraries which provides similar functionality.

