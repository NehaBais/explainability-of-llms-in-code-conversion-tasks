Here is the converted code from JavaScript to C:
```
#include 
#include 
int main() {
 FILE *file;
 int err = 0;
 
 // Create an empty file called "output.txt" in the current working directory
 file = fopen("output.txt", "w");
 if (file == NULL) {
 fprintf(stderr, "Error creating file: %sn", strerror(errno));
 err = 1;
 } else {
 fclose(file);
 }
 
 // Create an empty file called "output.txt" in the filesystem root
 file = fopen("/output.txt", "w");
 if (file == NULL) {
 fprintf(stderr, "Error creating file: %snn", strerror(errno));
 err = 1;
 } else {
 fclose(file);
 }
 
 // Create an empty directory called "docs" in the current working directory
 mkdir("docs");
 struct stat info;
 int s = stat("docs", &info);
 if (s == -1) {
 fprintf(stderr, "Error creating directory: %sn", strerror(errno));
 err = 1;
 }
 
 // Create an empty directory called "docs" in the filesystem root
 mkdir("/docs");
 s = stat("/docs", &info);
 if (s == -1) {
 fprintf(stderr, "Error creating directory: %snn", strerror(errno));
 err = 1;
 }
 
 return err;
}
```
Note that this code assumes that the `strerror` function is defined in the C standard library. If it's not available, you can define your own implementation.

