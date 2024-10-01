Here's the equivalent C code for the given Rust code:
```
#include 
#include 
int main() {
 char* file_name = argv[1];
 struct stat st;
 if (stat(file_name, &st) == -1) {
 perror("stat");
 exit(EXIT_FAILURE);
 }
 printf("Size of file.txt is %ld bytes", (long) st.st_size);
 return 0;
}
```
Note that in C, we need to include the `stdlib.h` and `sys/stat.h` headers to use the `stat()` function and the `struct stat` structure, respectively. We also need to link against the `c` library using the `-lc` flag when compiling the code.

