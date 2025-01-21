The error generated is due to undefined identifiers (S_IRWXU, S_IRGRP, S_IXGRP, S_IROTH, S_IXOTH). These identifiers are used to set the permissions for owner, group and others respectively in `mkdir` function call in C++.

The correct code is as follows:

```cpp
#include <iostream>
#include <stdio.h>

int main() {
  // Creating a new empty file named "output.txt" and writing an empty string to 
  // it
  FILE *file = fopen("output.txt", "w");
  if (!file)
    perror("fopen");
  fclose(file);

  // Creating a new directory called "docs"
  mkdir("docs", S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
  if (errno == EEXIST)
    std::cout << "Directory 'docs' already exists\n";
  else {
    perror("mkdir");
  }

  // Creating a new directory named "/docs"
  mkdir("/docs", S_IRWXU | S_IRGRP | S_IXGRP | S_IROTH | S_IXOTH);
  if (errno == EEXIST)
    std::cout << "Directory '/docs' already exists\n";
  else {
    perror("mkdir");
  }

  return 0;
}
```
This code will correctly create a new file named output.txt, and then attempt to create a directory named "/docs" with the specified permissions. If the directory already exists (and if EEXIST is returned by `errno`), it prints out an appropriate message. If either operation fails (indicated by non-zero `errno` values), it will print out the corresponding error messages.
