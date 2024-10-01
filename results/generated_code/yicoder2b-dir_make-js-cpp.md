Sure, here's how you can implement that function in C++ -

```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

std::vector<std::string> split(const std::string& s, char delim) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delim)) {
        tokens.push_back(token);
    }
    return tokens;
}

void mkdirp(const std::string& p) {
    if(access(p.c_str(), F_OK)==0){     // if file/directory exists
        return;
    } else {                          // else
        std::vector<std::string> dirs = split(p, '/'); 
        for (const std::string& dir : dirs) {
            if (dir.empty()) continue;  // ignore empty string
            if (access(dir.c_str(), F_OK) == -1) {
                std::cout << "mkdirp " << dir << std::endl;
                if (mkdir(dir.c_str(), 0777) < 0 ){
                    throw std::runtime_error("Unable to create directory\n");  // handle error here
                }
            }
        }
    }
}
```

This program will check if the directory exists. If it doesn't, it creates parent directories as needed. Note that you need `sys/stat.h` and `fcntl.h` to make the access call work, if they aren't available you can try using the `-L` option during linking or adding them in your preprocessor definitions.

You can call this function with a path as argument. The return value is void as we are not returning anything from the mkdirp function, error handling has been done at higher level.
