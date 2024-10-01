 In C, there is no built-in filesystem library that directly provides information about file existence and type like in std::filesystem in C++. But we can do it manually using functions from the standard libraries such as stat(), opendir()/readdir(), fopen(). Here is how you could write your program:

```c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

int file_exists(const char* path) {
    struct stat info;
    if (stat(path, &info) != 0) { // check if it exists or not
        printf("%s does not exist\n", path);
        return 0;
    } else { // check if it's a directory or file
        if (S_ISDIR(info.st_mode))
            printf("%s is a directory\n", path);
        else
            printf("%s exists with a file size of %ld bytes.\n", path, (long) info.st_size);
    }
    return 1;
}

int main() {
	file_exists("input.txt");
	file_exists("zero_length.txt");
	file_exists("/docs/input.txt");
	file_exists("/docs/zero_length.txt");
	return 0;
}
```
In this code, the file_exists function uses stat() to get information about a file or directory. If the stat call fails (returns an error), it prints that the file does not exist. Otherwise, if S_ISDIR(info.st_mode) is true, it means that the file exists and it's a directory, so it prints "is a directory". Else, it means that the file exists and it's a normal file or link, so it prints "exists with a file size of {filesize} bytes." where {filesize} is the size in bytes of the file. 
Please note that C doesn't have built-in support for filesystem operations as high-level as C++ has, such things are usually done with standard library functions or system calls. And paths should be prefixed by a slash if they're absolute, otherwise they're relative to the current directory.
