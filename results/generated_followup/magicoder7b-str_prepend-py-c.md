 The error message is indicating that C does not implicitly declare functions from standard library, like `strncat`.

To fix this problem, include `<string.h>` at the top of your program. This header file declares the `strncat` function, which you can now use in your code to concatenate strings.

Here is the corrected C code:

```c
#include <stdio.h>
#include <string.h> // Include this line to declare strncat
#define SIZE 100

int main() {
  char s[SIZE] = "12345678";
  strncat(s, "0", SIZE); // by concatenation
  printf("%s\n", s);

  return 0;
}
```
This code declares a string array `s` with the value `"12345678"`. It then appends `"0"` to the end of `s` using the function `strncat()`, which is declared in `<string.h>`. The resulting string is printed out with `printf()`.
