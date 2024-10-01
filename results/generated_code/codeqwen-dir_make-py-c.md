The equivalent function in C would be:

```c
#include <sys/stat.h>

int mkdirp(char * path) {
   mode_t mode = S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH; // You can change this to your needs
   int result = mkdir(path, mode);
   if (result == 0 || errno == EEXIST) {
     return 0;
   } else {
     perror("mkdirp");
     return -1;
   }
}
```

This function uses the `mkdir()` system call to create a new directory. The third argument, `mode`, specifies the permissions of the newly created directory. If the directory already exists and the operation is successful (`result == 0`), it will return 0. If it doesn't exist and an error occurs, it prints out the error message using the `perror()` function before returning -1.

Remember to include the `sys/stat.h` header file at the beginning of your C code as this provides us with definitions for file types (like S_IRWXU for owner read/write/execute permissions). 

Please note that, unlike Python's os.makedirs(path, exist_ok=True) method, this function will not make parent directories if they do not already exist - it only creates the final directory in the path and its parents if they don't exist.
