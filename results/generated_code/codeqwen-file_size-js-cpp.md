The equivalent C++ code for the given JavaScript code would be using the boost filesystem library:

```C++
#include <boost/filesystem.hpp>

int main() {
    boost::filesystem::path p("input.txt");
    if (exists(p))
        std::cout << "File size of input.txt: " 
            << boost::filesystem::file_size(p) << '\n';
    else
        std::cout << "No such file\n";

    p = "/input.txt";
    if (exists(p))
        std::cout << "File size of /input.txt: " 
            << boost::filesystem::file_size(p) << '\n';
    else
        std::cout << "No such file\n";

    return 0;
}
```

In this code, the `exists()` function from Boost filesystem checks whether a file or directory with the given path exists. If it does, the `file_size()` function is used to get its size in bytes.
