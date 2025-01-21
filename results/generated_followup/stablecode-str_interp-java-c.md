The error generated is related to the `malloc` function, which is called on line 5 but not declared anywhere before that line. To fix this error, we need to include the header file `stdlib.h`, which declares the `malloc` function and also provides declarations for other functions like `free`. 

Here's the corrected code:
```c
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *adjective = "little";
    char* lyric = malloc(100 * sizeof(char)));
    snprintf(lyric, 100, "Mary had a %s lamb", adjective);
    
    printf("%s\n", lyric);

    free(lyric);

    return 0;
}
```
This corrected code includes the header file `stdlib.h` which declares and provides declarations for various functions like `malloc`, `free`, etc. This ensures that the compiler can properly recognize and use these functions in the code.
