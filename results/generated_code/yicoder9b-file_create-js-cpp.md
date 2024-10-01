Below is the C++ equivalent of your JavaScript code using Boost Filesystem Library:

```cpp
#include <boost/filesystem.hpp>
using namespace boost::filesystem;

int main() {
    try {
        ofstream file("output.txt");
        file.close();
        create_directory("docs");
 
        current_path(initial_path() / path("/"));  // Switch to filesystem root

        ofstream file1("/output.txt");
        file1.close();
        create_directory("/docs");
    } catch (const boost::filesystem::filesystem_error &ex) {
        std::cout << ex.what() << '\n'; 
    }
    return 0;
}
```
Note: Boost is a set of libraries that you can use to make C++ programming more convenient and efficient. It is useful when working with files and directories, among other things. Please ensure that the Boost library has been installed on your system before running this code.
Also note error handling in exception block will be handled by catch block. If any error occurs while creating directory or file it will be caught and appropriate message will be displayed.
