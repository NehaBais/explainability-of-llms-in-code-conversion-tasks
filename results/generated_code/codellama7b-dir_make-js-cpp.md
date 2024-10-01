 Here's the C++ code that implements the same functionality as the provided JavaScript code:
```
#include <iostream>
#include <string>
#include <cstdlib>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;

void mkdirp(const string& path, const function<void(int)>& cb) {
    struct stat sb;
    if (stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode)) {
        // The directory already exists, return successfully
        cb(0);
        return;
    }

    string parent = path.substr(0, path.find_last_of('/'));
    if (parent != "" && !dirExists(parent)) {
        // Create the parent directories recursively
        mkdirp(parent, [](int er) {
            if (er == 0) {
                // The parent directory was created successfully, now create the current directory
                mkdirp(path, cb);
            } else {
                // Failed to create the parent directory, return with error
                cb(er);
            }
        });
    } else {
        // Create the current directory
        int er = ::mkdir(path.c_str(), 0755);
        if (er == 0) {
            cb(0);
        } else {
            cb(er);
        }
    }
}

bool dirExists(const string& path) {
    struct stat sb;
    return stat(path.c_str(), &sb) == 0 && S_ISDIR(sb.st_mode);
}
```
The `mkdirp` function takes a path as an argument and a callback function to call when the directory is created or an error occurs. The function first checks if the directory already exists, if so it returns successfully. If not, it checks if the parent directories exist, if not it creates them recursively using the `mkdirp` function again. Finally, it creates the current directory.

The `dirExists` function takes a path as an argument and checks if the directory exists by calling `stat` on the path and checking if the result is 0 (meaning that the file exists) and if the st_mode field of the stat structure indicates that it's a directory.
