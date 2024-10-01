Here is the C implementation of the function you described:
```c
#include 
#include 
void mkdirp(const char *path) {
 char *copy = strdup(path);
 char *p = copy;
 int mode = S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH;
 for (;*p; p++) {
 if (*p == '/') {
 *p = 0;
 mkdir(copy, mode);
 *p = '/';
 }
 }
 free(copy);
}
```
This implementation uses the `mkdir` function from the `libc` library to create directories. It first duplicates the input string so that it can be modified without affecting the original input. Then it iterates through each directory in the path, creating them if they do not already exist. Finally, it frees the memory used by the duplicate string.

