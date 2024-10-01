The given code is already in C, but here it is as a formatted C program:

```C
#include <stdio.h>
#include <string.h>

int main( ) {
    char original[50] = "Mary had a X lamb."; 
    char toBeReplaced[] = "X";
    char replacement[] = "little";

    size_t found = strstr(original, toBeReplaced) - original;
    strncpy(&original[found], replacement, sizeof(replacement)-1);
    original[sizeof(original)-1] = '\0';

    printf("String after replacement: %s\n", original);

    return 0 ;
}
```

In the code above, `strstr()` function is used to find the position of the substring within the string "X". After finding the position, `strncpy()` is used to replace "X" with "little". The '\0' character at the end of the original string marks its end.
