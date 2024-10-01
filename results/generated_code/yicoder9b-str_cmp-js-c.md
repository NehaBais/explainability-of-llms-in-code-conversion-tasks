The C programming language does not have the same built-in capabilities for string comparison as JavaScript. Here is a code snippet that accomplishes much of the same task:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h> // needed for tolower() function

int main(){
    char str1[] = "abcd";
    char str2[] = "abcd";
    char numStr1[] = "123";
    char str3[] = "ABCD";
    char str4[] = "dcba";
  
    printf("%d\n", strcmp(str1, str2) == 0); // true (exact equality)
    printf("%d\n", strcasecmp(str3, str1) == 0); // true (case insensitive equality)
    printf("%d\n", strcmp(str1, str4) < 0); // true (str1 comes before str4 lexically)
    printf("%d\n", strcmp(str1, str2) > 0); // false (str1 does not come after str2 lexically)
    printf("%d\n", strcmp(str1, numStr1) == 0); // false (numeric string comparison treated lexically)
  
    return 0;
}
```

Please note that the `strcasecmp()` function is used for case insensitive comparisons. The `strcmp()` function compares strings and returns: a negative integer if the first string comes before the second in lexicographical order, zero if they are equal, or a positive integer if it comes after. When comparing numeric strings, these functions treat them as strings (i.e., lexically) rather than integers/floats.
