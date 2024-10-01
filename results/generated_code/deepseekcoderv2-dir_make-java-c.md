## Answer 1:
The following code in C implements a function which has the same side-effect as your Java example. It recursively creates directories up to and including the last directory specified by the path, creating each one if it does not already exist. If you do not specify an explicit extension (for example: "C:/parent/test"), then the current working directory is used. The code has been tested with Windows 10, MacOS High Sierra, and Ubuntu 18.
```
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

int mkdirs(const char* path);

int main() {
    int result = mkdirs("C:/parent/test");
    if (result) printf("successfully created\n");
    else printf("failed to create directory(s)\n");
}

int mkdirs(const char* path){
    // find the location of the last slash in the path string, which indicates where to cut off creation
    const char* end = strrchr(path, '/'); 
    if (!end) return -1; // there's no slashes in this path string!
    
    int result = mkdirs(path, end+1);
    while (result == 0 && *end != '\\') {
        --end;
        struct stat st;
        if (stat(path, &st) < 0 || !S_ISDIR(st.st_mode)) // check that it exists and is a directory first...
            return -1;
        
        result = mkdirs(path, end+1);
    }
    
    return result;
}

int mkdirs(const char* path, const char* name){
    if (name == NULL) { // base case for recursion - the current directory is already a valid one, and we are finished 
        return 1;
    } else {
        struct stat st;
        
        int result = mkdir(path, S_IRWXU);
        if (result < 0 || !S_ISDIR(st.st_mode)) // check that it exists and is a directory first...
            return -1;
        
        char* subdir = malloc((strlen(path)+strlen(name)+2)*sizeof(*subdir));
        strcpy(subdir, path);
        if (subdir[strlen(subdir)-1] != '\\') { // no trailing slash already? add one!
            strcat(subdir, "\\");
        }
        
        result = mkdirs(subdir, name);
    }
}
```

