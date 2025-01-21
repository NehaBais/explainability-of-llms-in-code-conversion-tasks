In C, there is no direct equivalent to Python's built-in string operations like `startswith`, `endswith`, and `in`. So you have to implement these functionality yourself. Here is a possible solution in C:

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char *str1 = "abcd";
    char *str2 = "ab";

    printf("startswith: %d\n", startsWith(str1, str2));
    printf("endswith: %d\n", endsWith(str1, str2));
    printf("in: %d\n", in(str1, str2));

    int loc = find(str1, str2);
    if (loc != -1)
        printf("find: %d\n", loc);

    loc = find(str1, str2, loc + 1);
    if (loc != -1)
        printf("find: %d\n", loc);

    return 0;
}

int startsWith(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len2 > len1)
        return 0;

    for(int i=0; i<len2; ++i) {
        if(str1[i] != str2[i])
            return 0;
    }

    return 1;
}

int endsWith(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len2 > len1)
        return 0;

    for(int i=0; i<len2; ++i) {
        if(str1[len1-i-1] != str2[i])
            return 0;
    }

    return 1;
}

int in(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for(int i=0; i<len1-len2+1; ++i) {
        if(strcmp(&str1[i], str2) == 0)
            return 1;
    }

    return 0;
}

int find(char *str1, char *str2, int start) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (start >= len1 - len2 + 1 || start < 0)
        return -1;

    for(int i=start; i<len1-len2+1; ++i) {
        if(strcmp(&str1[i], str2) == 0)
            return i;
    }

    return -1;
}
```

This code first includes necessary headers like `stdio.h` and `string.h`. It then defines three functions, `startsWith`, `endsWith`, and `in`, which correspond to the Python function calls mentioned. The `find` function is also defined for finding a substring in a string starting from a given index.

Finally it tests all these functions with example strings and prints the results.
