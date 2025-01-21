Sure, here is the equivalent C code for your Go code. Note that C does not have built-in support for strings like Go, and you need to use character arrays or pointers to handle strings.

```c
#include <stdio.h>

int main() {
    char s[] = "hello";

    // output string variable
    printf("%s\n", s);

    // this output requested by original task descrption, although
    // not really required by current wording of task description.
    printf("%s literal\n", s);

    // concatenate variable and literal, assign result to another string variable
    char s2[100]; // assuming the maximum length is 100 characters for simplicity.
    int len = strlen(s);
    strcpy(s2, s);
    strcat(s2, " literal");

    // output second string variable
    printf("%s\n", s2);

    return 0;
}
```
This program will print out:


hello
hello literal
hello literal


The `strlen` function is used to find the length of the string, and the `strcpy` and `strcat` functions are used to copy and concatenate the strings respectively. The maximum size of the string array `s2` should be adjusted based on your specific requirements for handling large input strings.
