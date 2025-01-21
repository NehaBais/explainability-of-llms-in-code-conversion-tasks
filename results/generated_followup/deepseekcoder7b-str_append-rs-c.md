The error occurs because `strcat` is an undefined function without its header file included, which was not declared for use. The fix for this is to include the standard string library header file at the start of the program with `#include <string.h>`.

Here's how you can rewrite and correct the code:

```c
#include <stdio.h>
#include <string.h>

int main()  {
    char hello[50] = "Hello world";

    strcat(hello, "!!!!");

    printf("%s\n", hello);

    return 0;
}
```
This program will correctly concatenate the string literal `"!!!" to the original string in an idiomatic way and print it out.

