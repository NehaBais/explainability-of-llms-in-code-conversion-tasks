Error: The code contains calls to undeclared library functions `malloc`, `strlen`, `strcpy`, and `strcat` with types that are not supported by ISO C99 and later standards.
Fix: Include the appropriate header files (`<stdlib.h>`, `<string.h>`) or explicitly provide declarations for these functions in the code.
