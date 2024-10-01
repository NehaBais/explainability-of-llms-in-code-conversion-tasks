C does not support string manipulation as elegantly as C++, especially for simple tasks like string interpolation. However, with the help of standard libraries and manual loops, we can achieve similar results.

Here's a converted version of your code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "Mary had a X lamb.";
    const char toBeReplaced[] = "X";
    char replacement[] = "little";

    // Get the length of the strings
    int len_original = strlen(original);
    int len_toBeReplaced = strlen(toBeReplaced);

    // Find the position of the substring
    char *pos = strstr(original, toBeReplaced);
    
    if (pos != NULL) {
        int pos_index = pos - original;

        // Move memory after the replaced string to right by length of replacement string
        memmove(pos+len_toBeReplaced, pos + len_toBeReplaced - 1, 
            len_original - pos - len_toBeReplaced);

        // Copy the replacement string into position
        strncpy(original+pos_index, replacement, len_toBeReplaced);
    }
    
    printf("String after replacement: %s\n", original);
    return 0;
}
```

Please note that this code assumes that the string to be replaced is a null-terminated C-string.
