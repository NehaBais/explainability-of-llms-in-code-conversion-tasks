Here's the equivalent C code for the given Golang code snippet:
```c
#include 
#include 
int main() {
 struct stat info;
 if (stat("input.txt", &info) == -1) {
 perror("Error getting file info");
 return 1;
 }
 if (S_ISDIR(info.st_mode)) {
 printf("%s is a directoryn", "input.txt");
 } else {
 printf("%s is a filen", "input.txt");
 }
 if (stat("/input.txt", &info) == -1) {
 perror("Error getting file info");
 return 1;
 }
 if (S_ISDIR(info.st_mode)) {
 printf("%s is a directoryn", "/input.txt");
 } else {
 printf("%s is a filen", "/input.txt");
 }
 if (stat("docs", &info) == -1) {
 perror("Error getting file info");
 return 1;
 }
 if (S_ISDIR(info.st_mode)) {
 printf("%s is a directoryn", "docs");
 } else {
 printf("%s is a filen", "docs");
 }
 if (stat("/docs", &info) == -1) {
 perror("Error getting file info");
 return 1;
 }
 if (S_ISDIR(info.st_mode)) {
 printf("%s is a directoryn", "/docs");
 } else {
 printf("%s is a filen", "/docs");
 }
 return 0;
}
```
In the C code, we use the `stat()` function to get information about the files and directories. We check if they exist using the `-1` returned by `stat()`. If the file or directory exists, we print out a message indicating that it is either a file or a directory. We also use the `S_ISDIR()` macro from the `sys/stat.h` header file to check if the mode of the file or directory indicates that it is a directory.

