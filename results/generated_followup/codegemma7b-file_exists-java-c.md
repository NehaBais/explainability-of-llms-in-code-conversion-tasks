The errors occur because the `access()` function and the `F_OK` constant are not included in the header files. The fix is to include the `<unistd.h>` header file.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h> // Include the necessary header file
```
