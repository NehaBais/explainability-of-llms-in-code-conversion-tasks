This problem involves string comparisons in JavaScript and C programming language. We will illustrate the requested features using these languages. However, it's crucial to note that C does not inherently support lexical comparison of strings, unlike JavaScript. In C, you can only compare strings for equality or inequality based on their content, which would involve converting each character into its ASCII value and then comparing them sequentially. Here is how we might approach this in C:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[] = "abcd";
    char str2[] = "ABCD";
    
    // Case sensitive comparison
    if(str1 == str2) 
        printf("Both strings are equal\n");
    else if (strcmp(str1, str2) == 0)
        printf("Both strings are identical lexically\n");
    else
        printf("Strings are not equal\n");

    // Case insensitive comparison
    if((strcasecmp(str1, str2)) == 0)
        printf("Both strings are identical lexically (case insensitive)\n");
    else
        printf("Strings are not identical lexically\n");

    return 0;
}
```
This will give you the output "Strings are not equal" as JavaScript and C do not inherently support case-insensitive string comparison. However, we can accomplish this by converting all characters to uppercase before performing the comparison, which essentially behaves the same for these languages.
