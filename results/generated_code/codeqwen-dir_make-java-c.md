The equivalent C code to create a directory and any missing parents using the C standard library function `mkdir()` with the `S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH` mode is:

```c
#include <stdio.h>
#include <sys/stat.h>

int main() {
    mode_t mode = S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH; // Directory permission mode
    const char* path = "C:/parent/test"; // Path to the directory

    if (mkdir(path, mode) == -1 && errno != EEXIST) {
        perror("Error creating directory");
        return 1;
    } else if(errno == EEXIST){
        printf("Directory already exists.\n");
    }else{
        printf("Directory created successfully.\n");
    }

    return 0;
}
```

In this C code, the `mkdir()` function is used to create a new directory. If the `mkdir()` fails and the error number (`errno`) isn't `EEXIST`, an error message is printed out using `perror()`. If the error was `EEXIST`, it indicates that the directory already exists, so we print that instead of an error message. If everything went well, a success message is printed out.
