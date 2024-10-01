Here is the converted code from Golang to C++ that performs the specified renaming operations twice, once in the current working directory and once in the filesystem root:
```
#include 
#include 
int main() {
 // Rename file in current working directory
 if (rename("input.txt", "output.txt") != 0) {
 std::cerr << "Error renaming file in current working directory" << std::endl;
 return 1;
 }
 
 if (rename("docs", "mydocs") != 0) {
 std::cerr << "Error renaming directory in current working directory" << std::endl;
 return 1;
 }
 
 // Rename file and directory in root filesystem
 if (rename("/input.txt", "/output.txt") != 0) {
 std::cerr << "Error renaming file in root filesystem" << std::endl;
 return 1;
 }
 
 if (rename("/docs", "/mydocs") != 0) {
 std::cerr << "Error renaming directory in root filesystem" << std::endl;
 return 1;
 }
 
 return 0;
}
```
Note that this code assumes that the user has the necessary permissions to rename files and directories. If you are unsure about the permissions required, you can check them using the `stat` system call or the ` access` function in C++.

