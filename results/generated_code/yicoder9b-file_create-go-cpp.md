Below is the equivalent C++ code for your Golang task: 

```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <cstdlib>

void createFile(const char * fn) {
    std::ofstream file;
    file.open(fn);
    if (!file){
        std::cout << "Error creating file: " << fn << std::endl;
        return;
    }
    std::cout << "File " << fn << " created!" << std::endl;
    file.close();
}

void createDir(const char * dn) {
    if (mkdir(dn, 0777) < 0){
        std::cerr << "Error creating directory: "<< dn  << std::endl;
       return;
   }
    std::cout << "Directory " << dn << " created!" << std::endl;
}

int main() {
    createFile("input.txt");
    createFile("/input.txt");
    createDir("docs");
    createDir("/docs");
    return 0;
}
```
This C++ program performs the same task as your Go code by creating a file and a directory twice in different locations using the `ofstream` class to create files and the `mkdir` function from cstdlib to create directories.
