The error message indicates that there are multiple errors in the C code, each with its own specific error message. Some of these errors are warnings, which can be ignored. However, some errors indicate a problem with the code itself, such as an undeclared identifier or undefined function.
To fix this error, you will need to make sure that all the required headers and libraries are included in your code. In this case, the `stdio.h` header is needed for the `printf` and `fopen` functions, and the `unistd.h` header is needed for the `mkdir` function. You can add these headers at the beginning of your code:
```c
#include <stdio.h>
#include <unistd.h>
```
After making this change, recompile your code to check for any further errors. If there are still issues, you may need to make additional changes to the code or library files.

