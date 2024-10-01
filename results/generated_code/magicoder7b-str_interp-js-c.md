 The JavaScript function can be translated to C as follows:

```C
#include <stdio.h>
#include <string.h>

int main() {
    char original[100] = "Mary had a X lamb";
    char little[20] = "little";
    char replaced[100];
    
    strcpy(replaced, original);  // copy the original string to the replaced array
    
    int len = strlen(original);
    for (int i=0; i<len; i++) {
        if (original[i] == 'X') {   // If X found in the original string
            strncpy(replaced+i, little, strlen(little));  // replace it with the value of "little"
            break;
        }
    }
    
    printf("Original String: %s\n", original);
    printf("Replaced String: %s\n", replaced);
}
```
This C code copies the original string to the "replaced" string, then replaces 'X' with the value of little variable. The replaced string is printed out for verification.
