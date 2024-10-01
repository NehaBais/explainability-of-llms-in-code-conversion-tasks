Here is a C implementation of the `mkdirp` function:
```c
#include 
#include 
void mkdirp(const char *path) {
 int err = mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
 if (err == -1 && errno != EEXIST) {
 perror("mkdir");
 exit(EXIT_FAILURE);
 }
}
```
This implementation uses the `mkdir` function from the `sys/stat.h` header to create a directory and any missing parents. The `S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH` mode sets the permissions of the created directory to be read-write-executable for the owner, group, and others.
The `mkdirp` function first attempts to create the directory using `mkdir`. If this fails with an error other than `EEXIST` (file already exists), it prints an error message and exits. Otherwise, if the directory was successfully created or already exists, the function returns without error.
Note that this implementation is not completely cross-platform, as different operating systems may have different behaviors when creating directories. For example, some systems may require the `S_ISGID` flag to be set on the parent directory in order for newly created files and directories to inherit the group permissions from the parent. Additionally, some systems may not support the `exist_ok=True` argument to `os.makedirs`, so this implementation may not work as expected on those systems.

