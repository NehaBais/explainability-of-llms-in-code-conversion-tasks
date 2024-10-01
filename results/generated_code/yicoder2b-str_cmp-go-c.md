Here's how you can convert this code snippet from Golang to C:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char *a = "cat"; 
    char *b = "dog"; 

    // Comparing two strings for exact equality
    if(strcmp(a, b) == 0)
        printf("%s is bytewise identical to %s\n", a, b);
    else if (strcmp(a, b) != 0)
        printf("%s is bytewisely different from %s\n", a, b);
    // In C language string comparison is not the same as Golang.
    // We cannot directly compare two strings for lexical comparison.

    return 0;
}
```
Please note that in C language comparing non-numeric strings to other types like integers or floating point numbers may lead to errors, and also the type of string comparisons depends on the byte values at each point in the sequence which differs from Golang’s approach.

Also, to fully achieve case sensitive and case insensitive comparisons within the language, you would need to implement a custom function that performs these comparisons based on your desired behavior. Note that it's not possible to do this automatically because string comparison in C is done with respect to byte values at each point in the sequence, and the rules for how bytes are compared are highly dependent on the specific encoding used (UTF-8, ASCII etc). 

Finally, if you want to compare numeric strings lexically as Go does, you will need to manually convert these strings into numbers before comparing them. This can be done using atoi function in C but it's not advisable because it might result in unexpected behavior with non-numeric strings.
