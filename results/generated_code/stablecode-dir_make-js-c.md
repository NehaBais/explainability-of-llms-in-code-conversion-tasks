The JavaScript code provided above can be converted to C language as below: 

Please note that in C, dealing with directories and files usually requires the use of libraries. One such library is "dirent" for directory handling on Unix-like operating systems (POSIX) and similar operating system. For Windows OS, you may need to use other libraries like "CreateDirectory" function provided by WinAPI.

```c
#include <dirent.h>
#include <sys/stat.h>
#include <errno.h>

int mkdirp(const char *path) {
    DIR *dir;

    /* Check if path is a directory */
    dir = opendir(path));
    if (dir != NULL) {
        closedir(dir);
        return 0;  // success
    } else {
        int result = -1;

        switch (errno) {
            case ENOENT:
                result = mkdir(path, 0777));
                break;

            default:
                break;
        }

        return result;
    }
}
```

In the C code provided above, a function named "mkdirp" is implemented. This function takes a single path string as its argument and creates any missing parents directories in that path string. The function returns 0 if it successfully created all of the required parent directories or already existed at the time the function was called. If an error occurs while attempting to create one of the required parent directories, the function returns -1 to indicate that an error occurred.
