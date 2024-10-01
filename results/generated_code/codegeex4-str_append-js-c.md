C doesn't support strings as easily as JavaScript, but it is possible by using arrays or pointers. Here's one way to achieve this using a fixed size array:

```c
#include <stdio.h>

int main() {
    char s1[50] = "Hello";
    strcat(s1, ", World!");
    printf("%s\n", s1);
    return 0;
}
```
This code first initializes a character array `s1` with the string "Hello". Then it appends the string literal ", World!" to this array using the `strcat()` function. Finally, it prints out the contents of `s1`.

Note: The size of the array is set to 50 to avoid overflow if the appended string is larger than expected. This value may need to be increased depending on your specific needs. Also, C does not have a built-in mechanism to check for buffer overflows when using string functions like this.

Please make sure to include the header file `<string.h>` for `strcat()`.
