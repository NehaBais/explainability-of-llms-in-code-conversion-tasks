 C does not have built-in support for creating directories in an equivalent manner to JavaScript's `fs.mkdir()`. However, a similar task can be achieved with the help of system calls. Here is a simple implementation that creates a directory and any missing parent directories using POSIX API calls:

```c
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

void mkdirp(char *path) {
    if (mkdir(path, 0755) == -1 && errno != EEXIST) {
        int parent;

        // If the error is not "file exists", try to create missing parents recursively.
        if ((parent = getParentDirName(path)) != NULL) {
            mkdirp(parent); // Recursively call itself with the parent directory path
            
            // If all directories are created successfully, then create the current directory again
            mkdir(path, 0755);
        } else {
            printf("Failed to make directory %s: %d\n", path, errno);
        }
    }
}

// Helper function to get parent directory name from a given path.
char *getParentDirName(const char *path) {
    static char parent[PATH_MAX];  // Assuming PATH_MAX is defined in limits.h (POSIX standard)
    
    if ((strrchr(parent, '/') = strrchr(path, '/')) != NULL) {  
        strncpy(parent, path, strrchr(path, '/') - path);  // Copy parent directory name to 'parent'
    } else {
        return NULL;  // If the given path does not have a parent directory.
    }
    
    parent[strrchr(path, '/') - path + 1] = '\0'; // Remove slash after copying parent dir name
    return strdup(parent);  // Return duplicated string to avoid modifying original 'parent' array
}
```

Please note that unlike JavaScript, C has no built-in support for handling filesystem paths. You might have to write additional code to handle file paths correctly in this implementation. Also, it is important to call `strdup()` after obtaining the parent directory string because in C you can't modify a string literal (like `'/path/to/'`) directly.

Please also note that the error checking and reporting could be made more sophisticated than in the simple example above, depending on your needs.
