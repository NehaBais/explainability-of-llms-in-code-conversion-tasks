Here is the equivalent C code for your requirement:

```c
#include <stdio.h>
#include <string.h>

int main( ) {
    char greeting[20] = "Hello";
    strcat(greeting, " , world!");
    printf("%s\n", greeting );
    return 0 ;
}
```
