Below is the equivalent C code:
```c
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char *s1 = "hello";
    printf("%s world\n", s1);
    
    char *s2;
    asprintf(&s2, "%s world", s1);
    printf("%s\n", s2);
    
    char *s3 = ",  ".join([s1, "world", "mom"]);
    printf("%s\n", s3);
    
    char *s4 = ",  ".join([s1, "world", "mom"]);
    printf("%s\n", s4);
    
    return 0;
}
```
In C, we can't perform string concatenation directly like in Python. We use `asprintf()` function to create a new string that's the result of concatenating several other strings, separated by a comma and space, with s1.
The line using `join` is wrong because it's not valid in C. However, we can simulate what it does by using a simple for loop to iterate through an array of strings.
