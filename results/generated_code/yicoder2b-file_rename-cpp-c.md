This C++ code is already converted to C as it is standard C which doesn't have a direct equivalent to the rename function. This function only exists in C++. The equivalent in C would be to use system() and change the file names, but this may not work if the process runs with insufficient privileges.

Here is how you can do it:
```c
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    char oldname[] = "input.txt";
    char newname[] = "output.txt";
    struct stat st;
    if (stat(oldname, &st) == 0 && S_ISREG(st.st_mode)) {
        rename(oldname,newname);
    }
    
    chdir("./docs/"); // change to directory here
    char newdir[] = "mydocs";
    if (mkdir(newdir, 0755) == 0 && stat(newdir, &st) == 0 && S_ISDIR) {
        rename(newdir, oldname); // rename to old name
    }
    return 0;
}
```
This code will rename "input.txt" to "output.txt" and create a directory called "mydocs" in the current working directory. You should replace "./docs/" with "/path/to/docs/" if your paths are different.
