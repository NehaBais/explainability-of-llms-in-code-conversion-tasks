 In C, there is no built-in function to join array of strings into one string. But we can accomplish this by using `snprintf` or `sprintf`. Here's how you might implement it:

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char* myStrings[] = {"prepended to", "my string"};
    int num_strings = sizeof(myStrings)/sizeof(char*);
    int total_length = 0;
    for (int i=0; i<num_strings; i++) {
        total_length += strlen(myStrings[i]);
    }
    char *prepended = malloc(total_length + 1); // 1 extra character for the null terminator
    int position = 0;
    for (int i=0; i<num_strings; i++) {
        strncat(prepended, myStrings[i], total_length - position + 1);
        position += strlen(myStrings[i]);
    }
    printf("%s\n", prepended);
    free(prepended); // Don't forget to free the memory!
    
    return 0;
}
```

Please note that in this C version, we have to manually track and manage the memory of `prepended`. In C++, the STL handles the memory automatically for us.
