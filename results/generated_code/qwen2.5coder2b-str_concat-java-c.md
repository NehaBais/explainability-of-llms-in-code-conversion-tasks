Sure, here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
   char s[] = "hello";  // Create a string variable equal to any text value.
   printf("%s literal\n", s);  // Output: hello literal

   char s2[] = strcat(s, " literal");  // Concatenate another string literal and assign the result back to s2
   printf("%s\n", s2);  // Output: helloliteral

   return 0;
}
```

The `strcat` function is used to concatenate two strings. The first parameter is the destination string, the second parameter is the source string. The function modifies the original string, so we need to assign the result back to `s2`.

Please note that C uses zero-terminated character arrays (strings), unlike Java. Also, string concatenation in C requires manually managing the memory for new string objects.

The output will be:

hello literal
helloliteral

