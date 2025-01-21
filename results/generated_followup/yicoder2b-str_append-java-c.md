The error in the above C code is due to the fact that `strcat()` function is not declared in line 7 of the file. We can solve this problem by including <string.h> library which provides declaration for all string functions. After including the header, we should be able to compile and run without any errors.

Here's the corrected code:

```c
#include <stdio.h>
#include <string.h> // Include this to avoid error due to undefined strcat

int main() {
  char string[10] = "abc"; 
  printf("%s\n", string);   // print initial string
  strcat(string, "def");    // append to the string
  printf("%s\n", string);   // print final string after appending
  return 0;
}
```

If you compile this code, it should not generate any error.
