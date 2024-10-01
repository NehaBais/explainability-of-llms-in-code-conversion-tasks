In C++, we can use the `<fstream>` library for creating files and the `<sys/stat.h>` library to create directories. Here's how you can translate your Python code into C++:

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>

void create(const std::string& directory) {
    std::ofstream file;
    file.open(directory + "/output.txt");
    file.close();

    if (mkdir((directory + "/docs").c_str(), 0777) == -1)
        std::cerr << "Error creating directory" << std::endl;
}

int main() {
    create(".");
    create("/");
}
```

Please note that the `mkdir` function call in the C++ code is used to create directories and it may not work as expected on some file systems. It will fail if the filesystem does not support directories of arbitrary size or if there's already a non-directory object named 'docs'. 

Also, be aware that you'll need the necessary permissions to write in the root directory (`/`) on Unix-like systems (such as Linux and macOS). On Windows, writing to the root directory might require administrator privileges.
