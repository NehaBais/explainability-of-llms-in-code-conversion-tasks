Below is the equivalent C code for your Python script:

```c
#include <stdio.h>
#include <sys/stat.h>
#include <string.h> 
#include <stdlib.h> 

int fileExists(const char *filename) {
    struct stat st;
    if (stat(filename, &st) != 0)
        return 0;
    return 1;
}

int directoryExists(const char *dirname){
   struct stat st;

   if(stat(dirname, &st) != 0)
      return 0;
   return 1;
}

int main() {
  // check for file in current working directory
  printf("Does 'input.txt' exist in the current working directory? %s\n", fileExists("input.txt") ? "Yes" : "No");
  // check for file and directory in root of filesystem 
  char* file="/input.txt";
  char* dir="/docs";

  printf("Does 'input.txt' exist at the specified path? %s\n", fileExists(file) ? "Yes" : "No");
  printf("Does 'docs' exist at the specified path? %s\n", directoryExists(dir) ? "Yes" : "No");

  return 0;
}
```
This program checks for existence of a file and directory in two different locations - current working directory and root of filesystem. It uses `stat` function to check if a file or directory exists at the specified location.
