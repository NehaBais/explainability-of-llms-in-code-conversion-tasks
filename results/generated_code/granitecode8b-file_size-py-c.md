Here is the converted code from Python to C:
```
#include 
#include 
int main() {
 struct stat st;
 char filename[100] = "input.txt";
 char root_filename[100] = "/input.txt";
 
 // Verify file size in current working directory
 if (stat(filename, &st) == 0) {
 printf("File size: %ld bytesn", (long)st.st_size);
 } else {
 perror("Error getting file size");
 }
 
 // Verify file size in file system root
 if (stat(root_filename, &st) == 0) {
 printf("File size: %ld bytesn", (long)st.st_size);
 } else {
 perror("Error getting file size");
 }
 
 return 0;
}
```
Note that in C, the `stat()` function is used to retrieve information about a file, such as its size. The `struct stat` structure is used to store this information. The code also includes error handling using the `perror()` function.

