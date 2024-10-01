Here's the converted code from Rust to C:
```
#include 
#include 
int main() {
 struct stat attr;
 for (char *file : {"input.txt", "docs", "/input.txt", "/docs"}) {
 if (stat(file, &attr) == 0) {
 if (S_ISDIR(attr.st_mode)) {
 printf("%s is a directoryn", file);
 } else {
 printf("%s is a filen", file);
 }
 } else {
 printf("%s does not existn", file);
 }
 }
 return 0;
}
```
Note that the use of C++-style range-based for loops is not possible in pure C. Instead, we use a standard for loop with an iterator over the array {"input.txt", "docs", "/input.txt", "/docs"}.

