Here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a string variable.
    char s[] = "hello";

    // Print the first string variable.
    printf("%s\n", s);

    // Concatenate a string literal to the first string variable, assign result to another string variable
    char s2[50]; // Make sure this size is enough for your concatenated string
    strcpy(s2, s);
    strcat(s2, " literal");

    // Print the second string variable.
    printf("%s\n", s2);

    return 0;
}
```

Please note that C doesn't natively support dynamic strings like Go does. So we have to manually manage memory for storing the new string. In this code, I assumed the maximum length of the concatenated string would not exceed 50 characters which is a placeholder size. Adjust it according to your requirement. Also remember in C strings are represented by null-terminated character arrays unlike Go's `string` type.
