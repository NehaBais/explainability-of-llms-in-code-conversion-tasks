Sure, here is the equivalent C code for the Python script. 

```c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
int main() {
    // Create output.txt in current directory
    if(access("output.txt", F_OK)==-1) 
        {
            int fd = open("output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
            close(fd);
        }

    // Create docs directory in current directory
    if(access("docs/", F_OK)==-1) 
        {
            mkdir("docs", S_IRUSR | S_IWUSR);
        }
      
    // Create output.txt in root directory (/)
    if(access("/output.txt", F_OK)==-1) 
        {
            int fd = open("/output.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
            close(fd);
        }    
    // Create docs directory in root (/)
    if(access("/docs/", F_OK)==-1) 
        {
           mkdir("/docs", S_IRUSR | S_IWUSR);
        }
    return 0;
}
```

Please note that C doesn't provide a direct way to check if a file or directory exists. Therefore, we are using the 'access()' function with appropriate error checking in order to check and create these files/directories if they do not exist.
Also, remember that creating directories in Linux (or other POSIX-like systems) typically requires permissions, which can be set at the time of directory creation via the 3rd argument to 'mkdir()'.
