Here's how you can accomplish this in C:

```C
#include <stdio.h>
#include <string.h>
 
int main() {
    char str1[20] = "def"; // equivalent to String string = "def";
    char str2[] = "abc";  // create another string literal which we will prepend to the original string

    strcat(str2, str1);   // concatenate (prepend) str1 before str2 in C

    printf("Final String after prepending: %s\n", str2); // prints "abcdef"
    return 0;
}
```

This code does the equivalent of Java's `+` operator to concatenate strings. The function `strcat()` is used for this in C which works as follows: strcat(destination, source) and it appends a copy of the source string to the destination string. But remember that the destination string must be large enough to contain both the original contents plus the additional characters.

Please note that unlike Java, C doesn't support dynamically growing strings by default. Therefore we need to manually declare the size for char arrays (fixed-size character array).
