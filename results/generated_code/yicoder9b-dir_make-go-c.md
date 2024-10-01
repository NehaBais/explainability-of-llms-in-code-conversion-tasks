Creating a directory in C with missing parents is more complex than in Golang because the C standard library does not provide such functionality. It requires writing custom functions to iterate through each part of the path and create it if it doesn't exist yet. Here is how you can implement this function using C language:

```c
#include <sys/stat.h> 
#include <errno.h>  
#include <string.h>
#include <stdlib.h>

int mkdir_p(const char *dir, mode_t mode) {
    char *copy = strdup(dir); // We need to be able to modify the string 
    char *token = strtok(copy, "/");
   
    do {
        if (mkdir(dir, mode) == -1) {
            // If already exists or an error occurred, break.
            if (errno == EEXIST || errno == EACCES ) 
                break;  
            else 
                return -1; // Return -1 if there's any other kind of error
        }
    } while ((token = strtok(NULL, "/")) && (dir = token));

    free(copy);
    return 0;
}

int main() {
   if (mkdir_p("/tmp/some/path/to/dir", 0770) == -1) {
      perror("Failed to create directories.");
       // Handle error case as you need
   } else {
    printf("Directories created successfully\n");
  }
}
```
