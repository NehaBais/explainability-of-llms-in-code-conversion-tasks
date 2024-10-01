Answer: Here's the C code that accomplishes the same task:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s = "hello"; // Declare a string variable with initial value "hello"
    printf("%s\n", s); // Print the contents of the string variable
    
    size_t len1 = strlen(s) + 6; // Calculate length of new string (original string plus " world")
    char *s1 = malloc(len1); // Allocate memory for new string
    strcpy(s1, s); // Copy original string to new string
    strcat(s1, " world"); // Concatenate " world" to end of new string
    
    printf("%s\n", s1); // Print the contents of the new string
    
    free(s1); // Free memory allocated for new string
    
    return 0;
}
```
