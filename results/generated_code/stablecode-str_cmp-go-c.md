Below is a translation of your Go code into C language:

C Code:
```c
#include <stdio.h>
#include <string.h>

int main() {

    char c[4] = "cat";
    char d[3] = "dog";

    // Exact equality comparison
    if (strcmp(c, d) == 0)) {
        printf("%s is bytewise identical to %s\n", c, d);
    } 

    // Inequality comparison
    if (strcmp(c, d) != 0)) {
        printf("%s is bytewise different from %s\n", c, d));
    }

    // Lexical ordering before 
    if ((strcmp(c, d) < 0))) {
      printf("%s is lexically ordered before than %s\n", c, d);
    } 

    // Lexical ordering after
    if (strcmp(c, d) > 0)) {
        printf("%s is lexically ordered after than %s\n", c, d));
    }

    // Case sensitive comparison 
    if ((strcmp(c, d) == 0))) {
      printf("Case Sensitive: %s is bytewise identical to %s\n", c, d);
    } 

    return 0;
}
```
This C code demonstrates how you can compare two strings in C. It uses the `strcmp` function from the string library which compares two strings lexically and returns an integer less than, equal to, or greater than zero if the first argument is lexicographically less than, equal to, or greater than the second.
