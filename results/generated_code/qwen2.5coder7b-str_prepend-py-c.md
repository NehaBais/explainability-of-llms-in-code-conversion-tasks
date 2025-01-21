Here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[] = "12345678";
    // Prepend '0' to the string s
    for(int i = 0; i <= strlen(s); i++) {
        s[i + 1] = s[i];
    }
    s[0] = '0';
    printf("%s\n", s);
    return 0;
}
```

In C, strings are character arrays. The code above first makes space for the additional character by shifting all characters in the string one position to the right and then inserts the new character at the start of the array.
