Error: The code contains calls to undeclared library functions `malloc`, `strlen`, `strcpy`, and `strcat`, which are not included in the header files `<stdio.h>` or `<string.h>`.

Fix: Include the necessary header files `<stdlib.h>` and `<string.h>` to declare the missing library functions.
