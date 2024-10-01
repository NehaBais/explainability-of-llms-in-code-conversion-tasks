Below is the equivalent C++ code for your given Golang task:

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>

void create_file(const std::string& filename) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Error creating file: " << filename << '\n';
        return;
    }
    std::cout << "File " << filename << " created!\n";
}

void create_dir(const std::string& dirname) {
    int status = mkdir(dirname.c_str(), 0777);
    if (status != 0) {
        std::cerr << "Error creating directory: " << dirname << '\n';
        return;
    }
    std::cout << "Directory " << dirname << " created!\n";
}

int main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");

    return 0;
}
```

Please note:

1. In C++, the `ofstream` class is used to create and write to files. If an error occurs during file creation, it will fail and returns a false result.
2. The `mkdir()` function is used to create directories. The mode parameter is ignored on some systems, but if you want to ensure the directory has certain permissions, you may need to use other methods or libraries like `boost::filesystem`.
3. Unlike Go's `os.Create` and `os.Mkdir`, this C++ code does not automatically close files and directories after creation. But since file operations are relatively fast in this case, it is usually okay.
4. Error handling is also different from Go. In the above code, we are checking whether the ofstream or mkdir function was successful by verifying their return values. If an error occurs, an appropriate message is printed to cerr (standard error).
5. This code requires the `<iostream>`, `<fstream>`, and `<sys/stat.h>` headers to work correctly.

Also, please note that creating files in `/` directory on some Unix-like systems might require higher privileges, or it may not be possible at all depending on the permissions of the system.
