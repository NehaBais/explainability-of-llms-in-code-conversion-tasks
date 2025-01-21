The errors are due to 'chdir' function which is part of posix library, not included in the std C++ library. For the same reason, 'stat' function for checking file status also doesn't exist in standard C++. The C++17 has filesystem library providing these functions but they should be used with caution due to potential platform-specific issues and permission issues.

To fix this error:

Include <sys/stat.h> (for 'stat') and <cstdio> for the 'remove' function.
Also, include <unistd.h> for 'chdir'.

Here is the corrected code:
```cpp
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include <cstdio>
#include <unistd.h>

const char *FILE_NAME = "output.txt";
const char *DIR_NAME = "docs";

int main() {
  for (int i=0;i<2;++i) { // repeat twice for current and root directory
    std::ofstream file(
        FILE_NAME,
        std::ios::out | std::ios::trunc); // create or truncate the file to size 0
    if (!file) {
      std::cerr << "Error creating/opening file: " << FILE_NAME;
      return EXIT_FAILURE;
    }

    struct stat st;
  
    // Create directory if it doesn't exist
    if ((stat(DIR_NAME, &st) != 0) || (!S_ISDIR(st.st_mode))) {
      if (mkdir(DIR_NAME, 0700) < 0) { // Permissions are 700 rwx------
        std::cerr << "Error creating directory: " << DIR_NAME;
        return EXIT_FAILURE;
      }
    } else if (chdir(DIR_NAME) < 0) {  // If the directory exists, try to change into it.
      std::cerr << "Could not enter directory: " << DIR_NAME;
      return EXIT_FAILURE;
    }

    if ((stat(DIR_NAME, &st) == 0) && (S_ISDIR(st.st_mode))){ // check if we are in correct directory
        chdir("../");  // go back to parent dir
     }
   }
   return EXIT_SUCCESS;
}
```
