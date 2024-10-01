Here's the C code that accomplishes the same task:
```
#include 
#include 
#include 

int main() {
 FILE *f;
 
 f = fopen("output.txt", "w");
 fclose(f);
 f = fopen("/output.txt", "w");
 fclose(f);
 
 mkdir("docs", 0777);
 mkdir("/docs", 0777);
 
 return 0;
}
```
Note that the C code uses `fopen` to create a file and `mkdir` to create a directory, while the C++ code uses `fstream` and `create_directory`. Also, the C code specifies the file permissions using octal notation, while the C++ code uses the `mode_t` type.

