This is the C version of the given C++ code:
```c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

int mkdirs(const char *dirPath, mode_t dirMode) {
    int ret = 0;

    /* mode_t 0755 means the file mode is set to read, write and execute for owner, 
     * group, and other. */ 
    if (mkdir(dirPath, dirMode | S_IRUSR | S_IWUSR | S_IXUSR) != 0) {
        if (errno == ENOENT){
            /* parent doesn't exist, try to create it */ 
            const char *parent = dirname(dirPath);
            if (!mkdirs(parent, dirMode)){
                /* re-create the directory */ 
                if (mkdir(dirPath, dirMode | S_IRUSR | S_IWUSR | S_IXUSR) != 0){
                    perror("mkdir");
                    ret = -1;
                } 
            }
        } else {
            fprintf(stderr, "Error creating directory '%s': %s\n", dirPath, strerror(errno));
            ret = errno;
        }
    }

    return ret;
}
```
Please note that this is a simplified implementation which may not work perfectly for all situations. Depending on the system, you might want to use other methods to create directories and handle potential errors (like checking if the parent directory exists).
