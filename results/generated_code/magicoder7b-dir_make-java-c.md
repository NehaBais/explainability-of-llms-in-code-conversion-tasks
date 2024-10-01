 The C standard library does not provide a direct equivalent to Java's File.mkdirs(). However, the POSIX function mkfifo() can be used instead which creates a directory. Here is an example of how you could implement this:

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int create_dir(const char *path) {
    if (mkfifo(path, 0755) == -1 && errno != EEXIST) {
        perror("Failed to create fifo");
        return 1;
    }
    printf("Directory %s successfully created\n", path);
    return 0;
}

int main(void){
    char *dir = "C:/parent/test";
    if (create_dir(dir) != 0){
        exit(1);
    }

    return 0;
}
```

This code will create a FIFO file at the specified path. The same effect as mkdir -p in Java can be achieved by creating multiple directories sequentially if they don't already exist, but this is not as direct or clear as simply using mkdir -p. For that reason, it is generally recommended to use language-specific libraries for these kinds of tasks when possible.

Also note that C does not have exception handling like Java so the code doesn't print an error if the directory cannot be created because it already exists (EEXIST error). This could be added by checking errno after the call to mkdir().
