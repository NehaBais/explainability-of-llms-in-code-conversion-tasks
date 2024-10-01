```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    char *s = "world!";
    strcat(s, "Hello, ");
    printf("%s\n", s);
    return 0;
}
```
In C, we don't have an equivalent of Golang's `:=` syntax for declaring and assigning a variable. Therefore, I used the `strcat()` function to concatenate two strings and assign it to the `s` pointer. 

Note: Please make sure you include `<string.h>` in your code if you are using `strcat()`. Also remember that arrays in C are not as flexible as slices in Golang. So, to create an array of characters (char[]) in C, you need to specify the length manually when declaring it.
