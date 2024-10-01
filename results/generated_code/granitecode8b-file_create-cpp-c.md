Here is the converted code from C++ to C:
```c
#include 
#include 
int main() {
 FILE *file = fopen("output.txt", "w");
 fclose(file);
 file = fopen("/output.txt", "w");
 fclose(file);
 
 mkdir("docs", 0755);
 mkdir("/docs", 0755);
}
```
In the converted code, we use the `fopen()` function to create an empty file called "output.txt" in both the current working directory and the filesystem root. We then use the `fclose()` function to close the file. Similarly, we use the `mkdir()` function to create an empty directory called "docs" in both the current working directory and the filesystem root. The third argument of `mkdir()` is used to set the permissions of the directory, which is set to 0755 (read, write, and execute for owner, read and execute for group, and read and execute for others).

