The equivalent C code for the given Golang code is as follows: 

```c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    struct stat buffer;
    if(stat("input.txt", &buffer) == 0){
        printf("Size of input.txt: %lld bytes\n", (long long int)buffer.st_size);
    }else{
        perror("Error in accessing file");
    }

    if(stat("/input.txt", &buffer) == 0){
        printf("Size of /input.txt: %lld bytes\n", (long long int)buffer.st_size);
    }else{
        perror("Error in accessing file");
    }

    return 0;
}
```
This C code does the same job as the Golang code - It prints the size of "input.txt" and "/input.txt" (relative and absolute paths respectively). Note that the st_size field gives the number of bytes in the file, so you will need to cast it to long long int if you want a larger type.
