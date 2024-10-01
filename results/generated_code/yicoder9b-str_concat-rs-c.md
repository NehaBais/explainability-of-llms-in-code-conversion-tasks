In C, string manipulation is a bit more verbose than in Rust. However, we can use the `strcat` function from the string standard library to concatenate two strings and `printf` for printing these variables.

Here's how you could convert it:
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[20] = "hello";
    printf("%s\n", s);
  
    strcat(s, " world");
    printf("%s\n", s);

    return 0;
}
```
