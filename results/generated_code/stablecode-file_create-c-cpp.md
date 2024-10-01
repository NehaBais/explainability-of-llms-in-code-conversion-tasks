Here is the equivalent code in C++:

```C++
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
  // Create file "output.txt" with permissions 0644 (rw-r-----) and size 0 bytes.
  std::string cmd = "touch output.txt && chmod 0644 output.txt";
  system(cmd.c_str());

  // Close the file descriptor for "output.txt".
  close(STDOUT_FILENO);

  // Create directory "docs" with permissions 0750 (rwxr-x---) and an empty directory.
  std::string createDirCmd = "mkdir -p docs && chmod 0750 docs";
  system(createDirCmd.c_str());

  return 0;
}
```

This C++ code does the same job as the original C code. It creates a new empty file called "output.txt" in the current working directory, with permissions 0644 (rw-r-----) and an empty directory called "docs", with permissions 0750 (rwxr-x---)).
