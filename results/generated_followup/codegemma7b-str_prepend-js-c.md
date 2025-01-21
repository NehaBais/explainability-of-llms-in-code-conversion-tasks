The error occurs because the `strcat` function is not included in the header file. The fix is to include the `<string.h>` header file.

```c
#include <string.h>

char *s = ", World";
char *str = "Hello";

str = strcat(str, s);

printf("%s", str);
```
