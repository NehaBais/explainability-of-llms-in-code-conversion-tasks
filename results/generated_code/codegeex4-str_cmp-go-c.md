In C, you can compare strings using the strcmp() function provided by stdlib.h library. This function compares two strings lexicographically i.e., character by character starting from the first character of each string until a mismatch is found or end of either string is reached. Here's how to accomplish these tasks in C.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char c[] = "cat";
    char d[] = "dog";

    // Comparing two strings for exact equality
    if (strcmp(c, d) == 0){
        printf("%s is bytewise identical to %s\n", c, d);
    }

    // Comparing two strings for inequality
    if (strcmp(c, d) != 0){
        printf("%s is bytewise different from %s\n", c, d);
    }

    // Comparing two strings lexically
    if (strcmp(c, d) < 0){
        printf("%s is lexicographically less than %s\n", c, d);
    }
    
    if (strcmp(c, d) > 0){
        printf("%s is lexicographically greater than %s\n", c, d);
    }

    // Case sensitive comparison
    char e[] = "Cat";
    if (strcmp(c, e) != 0){
        printf("%s is case sensitive different from %s\n", c, e);
    }
    
    // Case insensitive comparison by converting to lower case or upper case
    char f[] = "CAT";
    int i;
    for(i=0;f[i];i++)
       if(f[i]>='A' && f[i]<='Z')
          f[i] += 32;
    if (strcmp(c, f) == 0){
        printf("%s is case insensitive identical to %s\n", c, f);
    }
    
    return 0;
}
```

Note: C does not have built-in string comparison methods that are case-insensitive. We need to manually convert both strings into the same case before performing the comparison (the example above converts to lower case). Also note that this might not work properly for non-English characters, as it only handles ASCII.

The code also demonstrates how to compare two strings of numbers, which in C is treated lexically by default i.e., "23" is less than "4", because '2' comes before '4' when compared lexicographically. If you want numeric comparison, you'd need additional logic.
