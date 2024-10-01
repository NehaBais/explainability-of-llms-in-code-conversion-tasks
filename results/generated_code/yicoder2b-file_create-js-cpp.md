The equivalent C++ code for the given JavaScript is as follows:
```cpp
#include <iostream>
#include <stdio.h>

int main() {
  FILE* file;

  // Creating a new empty file named "output.txt" and writing an empty string to it
  file = fopen("output.txt", "w");
  if (!file) perror("fopen");
  fclose(file);

  // Creating a new empty file named "/output.txt" and writing an empty string to it
  file = fopen("/output.txt", "w");
  if (!file) perror("fopen");
  fclose(file);

  // Creating a new directory called "docs" 
  mkdir("docs", S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
  if (errno == EEXIST) std::cout << "Directory 'docs' already exists\n"; 
  else { perror("mkdir"); }

  // Creating a new directory named "/docs" 
  mkdir("/docs", S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
  if (errno == EEXIST) std::cout << "Directory '/docs' already exists\n"; 
  else { perror("mkdir"); }

  return 0;
}
```
Note that the usage of `fopen` and `fclose` requires that you have `stdlib.h` included, which is typically done at the start of your program. The `perror` function prints the system error message corresponding to the last operation performed by `fopen()` or `fclose()`. The bitmask argument (denoted as `S_IRWXU`) sets the permissions for the owner, group and others respectively. The bit masks are created by performing OR operations on these values with the S_* constants.
