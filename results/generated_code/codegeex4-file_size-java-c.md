C doesn't have built-in functions to get the size of a file as easily as Java. However, you can use the stat function to get information about a file (including its size) in C. 

Here is how your code would look like translated into C:

```c
#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat bufA;
    struct stat bufB;

    // Get info for the input.txt file in the current working directory
    if (stat("input.txt", &bufA) == 0)
        printf("%lu B\n", (unsigned long)bufA.st_size);
    else
        perror("Error getting size of file");

    // Get info for the input.txt file in the root directory
    if (stat("/input.txt", &bufB) == 0)
        printf("%lu B\n", (unsigned long)bufB.st_size);
    else
        perror("Error getting size of file");
  
    return 0;
}
```

Please note:
1. The stat function is not available on all platforms, for instance it doesn't work in Windows. This code should be run only on Unix-based systems (like Linux or Mac OS).
2. You need to link your program with the `-lutil` library when you compile it (`gcc -o myprogram myprogram.c -lutil`) because the stat function is found there.
3. The size returned by st_size field of struct stat is in bytes.
4. The error handling here is very basic, only printing an error message for a failed call to stat(). In a real-world application you would likely want to do more sophisticated error handling.
