You can do this by using `strcat()` function in C. In your code, you need to declare two strings: one for `s` and one for `"Hello, "`. Then you concatenate them using the `strcat()` function and assign the result back to `s`:
```
#include <string.h>

int main() {
    char s[20] = "world!";
    strcpy(s, "Hello, ");
    strcat(s, s);
    return 0;
}
```
