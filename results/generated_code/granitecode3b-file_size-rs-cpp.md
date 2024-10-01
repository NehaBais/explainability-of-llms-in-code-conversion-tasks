Here's the C++ code that accomplishes the same task as the given Rust code:
```c++
#include 
#include 
#include 
int main() {
 std::string fileName = argv[1];
 struct stat fileMetadata;
 if (stat(fileName.c_str(), &fileMetadata) == -1) {
 perror("Error accessing metadata");
 return 1;
 }
 printf("Size of %s is %ld bytes\n", fileName.c_str(), fileMetadata.st_size);
 return 0;
}
```
Note that the C++ code uses the `argv` array to get the file name passed as an argument to the program, rather than using the `env` crate. Also, the `stat` function is used to retrieve the file metadata, and the `perror` function is used to print out any errors encountered while accessing the metadata.

