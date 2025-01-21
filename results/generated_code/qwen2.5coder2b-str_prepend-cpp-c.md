Sure, here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *myStrings[] = {"prepended to", "my string"};
    int count = sizeof(myStrings) / sizeof(char *);
    
    // allocate memory for the concatenated string
    char *prepended = (char *)malloc((count + 1) * (strlen(myStrings[0]) + strlen(myStrings[1]) + 1));
    if (!prepended)
        return -1;

    // concatenate the strings
    strcpy(prepended, myStrings[0]);
    strcat(prepended, " ");
    strcat(prepended, myStrings[1]);

    printf("%s\n", prepended);
    
    free(prepended);  // don't forget to free the allocated memory

    return 0;
}
```
