Here is the converted code from JavaScript to C:
```c
#include 
int main() {
 // Rename file in current working directory
 _rename("input.txt", "output.txt");
 
 // Rename file in filesystem root
 _rename("c:/input.txt", "c:/output.txt");
 
 // Rename directory in current working directory
 _rmdir("docs");
 _mkdir("mydocs");
 
 // Rename directory in filesystem root
 _rmdir("c:/docs");
 _mkdir("c:/mydocs");
 
 return 0;
}
```
Note that the `_rename` and `_rmdir` functions are used to rename files and directories respectively. The `_mkdir` function is used to create a new directory. Make sure to replace "input.txt", "output.txt", "docs", "mydocs" with the actual file and directory names in your code. Also, make sure that you have the necessary permissions to rename or move files and directories on your system.

