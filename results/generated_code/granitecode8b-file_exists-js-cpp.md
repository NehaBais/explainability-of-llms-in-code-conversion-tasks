Here is the converted code in C++:
```
#include 
int main() {
 bool fso_fileexists_1 = (0 != _access("input.txt", 0));
 bool fso_fileexists_2 = (0 != _access("c:/input.txt", 0));
 bool fso_folderexists_1 = (0 != _access("docs", 0));
 bool fso_folderexists_2 = (0 != _access("c:/docs", 0));
 return 0;
}
```
Explanation:
- The `ActiveXObject` in JavaScript is replaced with the C++ header file `#include ` and its equivalent function `_access()`.
- The `FileExists()` method in JavaScript is replaced with the C++ function `_access()`, which checks if a file exists by using the access() system call. The second argument to access() is a bitwise OR of flags indicating how the file should be accessed, 0 for read access in this case.
- Similarly, the `FolderExists()` method in JavaScript is replaced with the C++ function `_access()`, but with the bitwise OR of flags set to check for write access.

