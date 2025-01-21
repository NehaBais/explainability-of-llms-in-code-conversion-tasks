The error is due to missing header files and incorrect function declarations. The fix is to include the necessary header files `stdlib.h` and `string.h`, and explicitly declare the functions `malloc`, `strlen`, and `sprintf`.

```c
#include <stdlib.h>
#include <string.h>

char *adjective = "little";
char *lyric = malloc(strlen("Mary had a ") + strlen(adjective) + strlen(" lamb") + 1);
sprintf(lyric, "Mary had a %s lamb", adjective);
```
