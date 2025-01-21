The error `Undefined symbols for architecture arm64` indicates that it can't find the main function symbol, which is required at runtime for the program to execute. This usually happens when there are unresolved external references in your compiled C code.

To solve this issue:
You have to compile your code with the -Wl,--no-undefined option to tell linker to ignore undefined symbols. For example, if you run command `gcc -Wl,--no-undefined file.c -o outputfile` then no error will be reported because the program won't be able to find any undefined symbols at all.

Here is the corrected C code:
```c
#include <stdbool.h>
#include <stdio.h>

void logic(bool a, bool b) {
  printf("a and b: %s\n",
         (a && b) ? "true" : "false");
  printf("a or b: %s\n", (a || b) ? "true" : "false");
  printf("not a: %s\n", (!a) ? "true" : "false");
}
```
This code is equivalent to the original Python function. The `stdbool.h` makes `bool` available in C. The C printf function is used instead of python's formatted string for printing.
