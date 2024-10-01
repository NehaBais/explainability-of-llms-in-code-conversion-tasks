### Pseudocode:

CREATE-DIRECTORY-PATH(directory)
    IF directory NOT EXISTS
        IF parent directory does not exist
            CREATE-DIRECTORY-PATH(parent directory)
        END IF
        CREATE directory
    END IF
END


### Code
```cpp
#include <iostream>
#include <sys/stat.h>
#include <string>

void createDirectoryPath(const std::string& path) {
    if (mkdir(path.c_str(), 0777) != 0 && errno != EEXIST) {
        std::cerr << "Error creating directory: " << strerror(errno) << "\n";
    }
}

int main() {
    createDirectoryPath("/tmp/test");
    return 0;
}
```
