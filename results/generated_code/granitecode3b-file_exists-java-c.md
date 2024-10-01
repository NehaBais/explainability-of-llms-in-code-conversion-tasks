Here's the C code that achieves the same result:
```c
#include 
#include 
int main(void) {
 struct stat st;
 
 if (stat("input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
 printf("File exists and is a regular file.\n");
 } else {
 printf("File does not exist or is not a regular file.\n");
 }
 
 if (stat("/docs/input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
 printf("File exists and is a regular file in the docs directory.\n");
 } else {
 printf("File does not exist or is not a regular file in the docs directory.\n");
 }
 
 return 0;
}
```
The C code uses the `stat` function to check if the files and directories exist, and then checks if they are regular files using the `S_ISREG` macro. The output of the program will indicate whether the file and directory exist and are regular files or not.

