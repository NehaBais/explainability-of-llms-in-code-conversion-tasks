Below is the equivalent C++ code for your Rust program.
 
Please note that creating a file and an empty directory in root path ('/') may not be possible due to system permissions, especially on a Unix-based system such as Linux or macOS. The following C++ version creates both a file and an empty directory at the current working directory (".") twice: 
```cpp
#include <iostream>
#include <fstream>
#include <sys/stat.h>

const char* FILE_NAME = "output.txt";
const char* DIR_NAME  = "docs";

int main() {
    std::ofstream file(FILE_NAME, std::ios::out | std::ios::trunc); // create or truncate the file to size 0
    if (!file) {
        std::cerr << "Error creating/opening file: " << FILE_NAME;
        return EXIT_FAILURE;
    }

    struct stat st;

    // Create directory if it doesn't exist
    if(stat(DIR_NAME, &st) != 0 || !S_ISDIR(st.st_mode)) {
        if (mkdir(DIR_NAME, 0700) < 0) { // Permissions are 700 rwx------
            std::cerr << "Error creating directory: " << DIR_NAME;
            return EXIT_FAILURE;
        }
    }  else if (chdir(DIR_NAME) < 0) { // If the directory exists, try to change into it.
        std::cerr << "Could not enter directory: " << DIR_NAME;
        return EXIT_FAILURE;
    }

    // Repeat for another new file and dir in current working directory
    file = std::ofstream(FILE_NAME, std::ios::out | std::ios::trunc); // create or truncate the file to size 0
    if (!file) {
        std::cerr << "Error creating/opening file: " << FILE_NAME;
        return EXIT_FAILURE;
    }

    // Create directory if it doesn't exist
    if(stat(DIR_NAME, &st) != 0 || !S_ISDIR(st.st_mode)) {
        if (mkdir(DIR_NAME, 0700) < 0) { // Permissions are 700 rwx------
            std::cerr << "Error creating directory: " << DIR_NAME;
            return EXIT_FAILURE;
        }
    } else if (chdir(DIR_NAME) < 0) { // If the directory exists, try to change into it.
        std::cerr << "Could not enter directory: " << DIR_NAME;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
```
This program creates an empty file and a directory in the current working directory, just like your Rust program. The C++ version also checks if the operations were successful and prints an error message otherwise. Note that the chmod command is not used as the mode of the directory/file is set when creating them with mkdir function.
