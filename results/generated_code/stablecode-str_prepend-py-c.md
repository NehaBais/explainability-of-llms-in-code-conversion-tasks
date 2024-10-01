Here is the equivalent C code for your Python script.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[9] = "12345678";

    // Prepending the string with another literal "0"
    strcpy(s, "0");
    strcat(s, s);  // by concatenation

    printf("%s\n", s);

    return 0;
}
```
This C program performs the same operations as your Python script. The string `s` is first set to "12345678". Then it is prepended with "0" using `strcpy`. Finally, the original `s` is appended to itself using `strcat`, then printed out with `printf`.
