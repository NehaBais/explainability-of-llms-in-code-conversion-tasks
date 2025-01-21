Error: call to undeclared function 'mkdir'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
Fix: Add `#include <sys/stat.h>` before the main function starts. This header file contains declaration of `mkdir`.
Corrected code:
```c
#include 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>

int main() 
{
  // Creating a new empty file called 
"output.txt" of size 0 bytes
int outputFile = open("output.txt", O_CREAT | O_TRUNC, 0644);
if (outputFile == -1) 
{
    perror("open");
    exit(EXIT_FAILURE);
}
// Closing the file descriptor for "output.txt"
close(outputFile);

// Creating a new empty directory called 
"docs"
int mkdirResult = mkdir("docs", 0755);
if (mkdirResult == -1) 
{
    perror("mkdir");
    exit(EXIT_FAILURE);
}
return 0;
}
```
