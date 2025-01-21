Error: 
The C++ compiler is complaining about `strcat()` and `printf()`, which are C library functions, not standard C headers. To fix this error, we need to include the corresponding header files for these functions in our C code.
Fix: 
```c
#include <stdio.h>
#include <string.h>
int main() {
  char *greeting = "Hello";
  strcat(greeting, " , world!");
  printf("%s", greeting);
  return 0;
}
```
The error message indicates that the C++ compiler cannot find the `strcat()` and `printf()` functions. To fix this, we included the corresponding header files (`string.h` for `strcat()` and `stdio.h` for `printf()`) at the beginning of our code. Now the code should compile without errors.

