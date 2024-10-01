
Here's the C++ code that meets the requirements you specified:
```
#include <iostream>
#include <cstdio>
#include <sys/stat.h>
#include <unistd.h>

using namespace std;

int main() {
  // Check for regular file in current working directory
  struct stat sb;
  if (stat("input.txt", &sb) == 0 && S_ISREG(sb.st_mode)) {
    cout << "input.txt is a regular file" << endl;
  } else {
    cout << "input.txt is not a regular file" << endl;
  }

  // Check for directory in current working directory
  if (stat("docs", &sb) == 0 && S_ISDIR(sb.st_mode)) {
    cout << "docs is a directory" << endl;
  } else {
    cout << "docs is not a directory" << endl;
  }

  // Check for regular file in filesystem root
  if (stat("/input.txt", &sb) == 0 && S_ISREG(sb.st_mode)) {
    cout << "/input.txt is a regular file" << endl;
  } else {
    cout << "/input.txt is not a regular file" << endl;
  }

  // Check for directory in filesystem root
  if (stat("/docs", &sb) == 0 && S_ISDIR(sb.st_mode)) {
    cout << "/docs is a directory" << endl;
  } else {
    cout << "/docs is not a directory" << endl;
  }

  return 0;
}
```
Note that the `stat` function is used to check if a file or directory exists, and the `S_ISREG` and `S_ISDIR` macros are used to determine if the path is a regular file or directory. The `main` function first checks for the existence of the file "input.txt" in the current working directory using the `stat` function. If it exists, it checks if it is a regular file using the `S_ISREG` macro and prints a message accordingly. It then does the same check for the directory "docs".

In the second part of the code, it checks for the existence of the file "/input.txt" in the filesystem root and determines if it is a regular file using the `S_ISREG` macro. It then checks for the existence of the directory "/docs" in the filesystem root and determines if it is a directory using the `S_ISDIR` macro.

The code uses the `<iostream>` library to output messages to the console, and the `<cstdio>` library to perform the `stat` function call.
