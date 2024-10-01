Here's the equivalent C code for the given Python code:
```
#include 
#include 
#include 
void create_file(const char *directory) {
 FILE *fp;
 char filename[1024];
 sprintf(filename, "%s/output.txt", directory);
 fp = fopen(filename, "w");
 fclose(fp);
 mkdir(directory, "docs");
}
int main() {
 create_file("."); // current directory
 create_file("/"); // root directory
 return 0;
}
```
Note that the C code uses the `sprintf` function to construct the filename, which is more secure than string concatenation. Also, the C code uses the `mkdir` function to create directories recursively, whereas the Python code only creates a single directory at a time using the `os.mkdir` function.

