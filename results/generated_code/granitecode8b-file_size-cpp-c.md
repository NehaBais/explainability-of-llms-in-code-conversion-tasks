Here is the converted code from C++ to C:
```c
#include 
#include 
#include 
void print_file_size(const char* filename) {
 struct stat file_info;
 if (stat(filename, &file_info) != 0) {
 perror("Error getting file size");
 return;
 }
 
 printf("Size of file %s is %ld bytes.n", filename, (long)file_info.st_size);
}
int main() {
 print_file_size("input.txt");
 print_file_size("/input.txt");
 return 0;
}
```

