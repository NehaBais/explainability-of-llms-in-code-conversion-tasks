Here is the equivalent code in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    // text assigned to a char array variable
    char s[] = "hello";

    // output string variable
    printf("%s\n", s);

    // concatenate variable and literal, assign result to another char array variable
    char s2[20];
    strcpy(s2, s);
    strcat(s2, " literal");

    // output second string variable
    printf("%s\n", s2);

    return 0;
}
```

C does not have a built-in string type like Golang. Instead, it has an array of characters (`char[]`) which is often used to represent strings. We use `strcpy()` and `strcat()` to copy and concatenate strings in C, respectively. 

The code first declares `s` as a string (array) with the value "hello". It then prints this out using `printf()`. Then it creates another string variable `s2`, copies the content of `s` into it using `strcpy()`, adds the literal to it using `strcat()`, and finally prints out the new string.
