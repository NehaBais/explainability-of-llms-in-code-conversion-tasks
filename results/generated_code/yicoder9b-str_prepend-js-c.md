In C programming language there is no direct way to prepend a string, but you can create a new string where the new string will consist of the added string followed by the original string. Here's how it could be done:

```c
#include <stdio.h> 
#include <string.h> 
  
int main() {
    // define the strings
    char s1[20] = "Hello";
    const char *s2 = ", World";
    
    // calculate new string length and allocate memory for it
    size_t len = strlen(s1) + strlen(s2) + 1;  // extra one is for null character at the end of every c-string.
    char *s3 = (char *) malloc(sizeof(char) * len);
   
    // combine strings into s3
    strcpy(s3, s2); // start with s2
    strcat(s3, s1); // append s1 
    
    printf("%s\n", s3);  
    free(s3);  // don't forget to free the memory!
    return 0;
}
```
This program will output: `Hello, World`.

Please be aware that dynamic allocation of a string (`malloc`) in C is necessary here because it is not possible to directly assign a new value to an existing string literal (like you do with JavaScript). You have to allocate memory for the new combined string and copy into it the contents from original strings.
