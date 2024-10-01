Here is the converted code from Golang to C:
```c
#include 
#include 
#include 
int main() {
 struct stat file_info;
 char *file_path = "input.txt";
 
 if (stat(file_path, &file_info) == -1) {
 perror("Error getting file size");
 } else {
 printf("File size: %ld bytesn", (long)file_info.st_size);
 }
 
 char *root_path = "/input.txt";
 
 if (stat(root_path, &file_info) == -1) {
 perror("Error getting file size");
 } else {
 printf("File size: %ld bytesn", (long)file_info.st_size);
 }
 
 return 0;
}
```
Note that the `char *` variable is used to store the file path and the function `stat()` is used to retrieve the file size. The conversion of the Golang code to C may not be fully accurate, so it is recommended to test the converted code thoroughly to ensure it works as expected.

