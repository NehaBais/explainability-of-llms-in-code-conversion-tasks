The equivalent C code for the given C++ code would look like this:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char myStrings[][20] = {"prepended to", "my string"};
    char prepended[100];

    strcpy(prepended, "This is prepended: ");
    strcat(prepended, myStrings[0]));
    strcat(prepended, myStrings[1]));

    printf("%s\n", prepended);

    return 0;
}
```
In this C code, we first declare a 2D character array `myStrings`, which is equivalent to the vector of strings in the C++ code. We also declare a character array `prepended` that will hold the final string after concatenation.
Next, we use `strcpy()` to prepend the string literal "This is prepended: " to the first string in the `myStrings` array. We then use `strcat()` to concatenate the second string in the `myStrings` array to the end of the `prepended` array.
Finally, we print out the contents of the `prepended` array using `printf()`.
