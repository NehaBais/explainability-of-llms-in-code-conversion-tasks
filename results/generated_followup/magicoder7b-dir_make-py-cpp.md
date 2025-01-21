 The error occurred because the linker could not find the main() symbol, indicating that there is no entry point to start execution of the program in C++. 

The fix would be to define a `main()` function where you call your `mkdirp()` function. This can take place before or after calling it depending on what functionality you want to test first.

Finally, the rewritten code would look like this:

```cpp
#include <cstring>
#include <dirent.h>
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>

void mkdirp(const char *path) {
    DIR *dir;
    std::size_t len = strlen(path);
    const char *p = &path[0];

    while (1) {
        if ((dir = opendir(p)) != NULL) {
            closedir(dir);
            break; // path exists
        } else {
            int err = errno; // save the error code for the next loop iteration

            if (err == ENOENT) { // no such dir or file exists, try creating it.
                int result = mkdir(p, S_IRWXU | S_IRWXG | S_IROTH |
                                          S_IXOTH); // create the missing directory(s)

                if (result == 0 ||
                    errno == EEXIST) { // successfully created or already exists.
                    break;
                } else {
                    std::cerr << "Could not create directory: "
                              << strerror(err); // error creating the directories.
                    exit(-1);
                }
            } else {
                std::cerr << "Could not access directory: "
                          << strerror(err); // other dir or file related issue.
                exit(-1);
            }
        }

        if (len-- == 0)
            break;                // end of path component reached.
        p = &path[0] + len + 1; // move to the next directory/component in the path.
    }
}

int main() {
    mkdirp("./path/to/directory");
    return 0; // success exit status
}
```
