 Here is the code in C:
```
#include <stdio.h>
int main() {
    char* s1 = ", World";
    char* s2 = "Hello";
    char* s3 = (char*)malloc((strlen(s2) + strlen(s1)) * sizeof(char));
    strcpy(s3, s2);
    strcat(s3, s1);
    printf("%s\n", s3);
    return 0;
}
```
This code is a simple example that demonstrates how to concatenate two strings in C. The first string is stored in the variable `s2`, which contains the value "Hello". The second string is stored in the variable `s1`, which contains the value ", World".

The program uses the `malloc()` function to allocate memory for the new string `s3`, which will contain the concatenated strings. The `strcpy()` function copies the contents of `s2` into `s3`, and then the `strcat()` function appends the contents of `s1` onto the end of `s3`.

Finally, the program uses the `printf()` function to print the value of `s3` to the console.
