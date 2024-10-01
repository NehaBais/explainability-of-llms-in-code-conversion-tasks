Here's a C implementation of the `mkdirp` function from the provided JavaScript code:
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
int mkdir_recursive(const char* path) {
 struct stat st;
 if (stat(path, &st) == -1) {
 if (errno == ENOENT) {
 // Directory doesn't exist, create it recursively
 mkdir_recursive(dirname(path));
 } else {
 // Some other error occurred, return it
 return errno;
 }
 }
 if (!S_ISDIR(st.st_mode)) {
 // Path exists but is not a directory, error out
 return EEXIST;
 }
 return 0;
}
int main() {
 const char* path = "./path/to/dir";
 int ret = mkdir_recursive(path);
 if (ret == 0) {
 printf("Directory created successfully\n");
 } else if (ret == EEXIST) {
 printf("Directory already exists\n");
 } else {
 printf("Error creating directory: %s\n", strerror(errno));
 }
 return 0;
}
```
This C implementation uses the `stat` function to check if a directory already exists. If it doesn't, the `mkdir_recursive` function is called recursively to create any missing parent directories. If the directory already exists, an error is returned. The `main` function demonstrates how to use the `mkdir_recursive` function with a sample path string and prints out the result.

