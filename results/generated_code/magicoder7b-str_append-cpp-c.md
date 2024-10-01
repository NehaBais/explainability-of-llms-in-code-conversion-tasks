 The C equivalent of the given C++ code is as follows:

```c
#include <stdio.h>
#define SIZE 1024

int main( ) {
    char greeting[SIZE] = "Hello" ;
    strcat(greeting, ", world!");
    printf("%s\n", greeting);
    
    return 0;
}
```
