Below is the C code equivalent to your GoLang code :
```c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h> 

void printFileSize(char* filename) {
    struct stat st; 

    if (stat(filename, &st) == -1) {
        perror("Failed to get file status");
    } else {
       printf("%llu\n", (unsigned long long)st.st_size);
   <｜begin▁of▁sentence｜>}
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");

    return 0;
}
```
In C, we have to use different system calls and include files for file stat operation which Go automatically handles in the background.
This code should compile fine with `gcc` or any other compatible C compiler. It prints out the size of a file if it exists and prints an error message otherwise. 

Please note that you'll need read permissions for the second call, i.e., you have to run this program as root user (or sudo) because it tries to access files in the root directory. If you want your program to work with regular users you could adjust the file path accordingly or give up and require the absolute path.

