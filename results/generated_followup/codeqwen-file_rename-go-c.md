Error: `PATH_MAX` is not defined in C

Fix: Include `<limits.h>` to define it.

Corrected code:
```c
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <limits.h> // include this line to define PATH_MAX

int main() {
  // ... (rest of the code remains unchanged)
}
```
