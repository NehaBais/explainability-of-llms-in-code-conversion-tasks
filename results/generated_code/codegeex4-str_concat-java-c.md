```c
#include <stdio.h>

int main() {
   char* s = "hello";
   printf("%s literal\n", s);
   char* s2 = strcat(strdup(s), " literal");
   printf("%s\n", s2);
   free(s2); //to prevent memory leak
   return 0;
}
```
This C code performs the same tasks as the original Java code. The `strcat` function in C is used to concatenate strings, and `strdup` is used to duplicate a string so it can be modified. We also need to free the memory after using `strdup` to prevent a memory leak.
