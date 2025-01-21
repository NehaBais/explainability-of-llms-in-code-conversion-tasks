Error: The compiler cannot find the stat function in the sys/stat.h header file, which is required to use the stat system call.
Fix: Replace "stat" with "stat64", as the latter is a 64-bit variant of the former that supports file paths longer than MAX_PATH (256 characters) on macOS.

```cpp
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

int main() {
  struct stat inputStat;
  std::string currentDirectoryPath = ".";
  if (stat64(currentDirectoryPath, &inputStat) == -1) {
    perror("stat");
    return 1;
  }
  bool isInputTextFile = S_ISREG(inputStat.st_mode);
  std::cout << "Is input.txt a file? " << isInputTextFile << '\n';

  struct stat docsStat;
  std::string rootPath = "/";
  if (stat64(rootPath, &docsStat) == -1) {
    perror("stat");
    return 1;
  }
  bool isDocsDirectory = S_ISDIR(inputStat.st_mode);
  std::cout << "Is docs a directory? " << isDocsDirectory << '\n';
  return 0;
}
```
