Here is the C++ version of your provided code:

```C++
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <string>

int main(void)
{
    struct stat foo;
    std::string filePath = "input.txt";

    // check if file exists in current working directory
    if (stat(filePath.c_str(), &foo)) {
        std::cout << "Error accessing the file." << std::endl;
        return 1;
    }

    std::cout << "Size of input.txt: " << foo.st_size << std::endl;

    // check if file exists in root directory
    filePath = "/input.txt";
    if (stat(filePath.c_str(), &foo))) {
        std::cout << "Error accessing the file." << std::endl;
        return 1;
    }

    std::cout << "Size of /input.txt: " << foo.st_size << std::endl;

    return 0;
}
```
This code will check for two different files in the current working directory and root directory respectively. It then prints out the size of these files. If either file cannot be accessed, an error message is printed to the console.
