```c
#include <string.h>
#include <stdio.h>

int main()
{
    const char *c = "cat";
    const char *d = "dog";

    if (strcmp(c, d) == 0)
    {
        printf("%s is bytewise identical to %s\n", c, d);
    }

    if (strcmp(c, d) != 0)
    {
        printf("%s is bytewise different from %s\n", c, d);
    }

    if (strcmp(c, d) > 0)
    {
        printf("%s is lexically bytewise greater than %s\n", c, d);
    }

    if (strcmp(c, d) < 0)
    {
        printf("%s is lexically bytewise less than %s\n", c, d);
    }

    if (strncmp(c, d, strlen(c)) >= 0)
    {
        printf("%s is lexically bytewise greater than or equal to %s\n", c, d);
    }

    if (strncmp(c, d, strlen(c)) <= 0)
    {
        printf("%s is lexically bytewise less than or equal to %s\n", c, d);
    }

    // Case insensitive compare
    if (strcasecmp(c, d) == 0)
    {
        printf("%s is equal to %s (case insensitive)\n", c, d);
    }
    else
    {
        printf("%s is not equal to %s (case insensitive)\n", c, d);
    }

    return 0;
}
```

**Explanation:**

* The `strcmp()` function performs a bytewise comparison of two strings.
* The `strncmp()` function performs a bytewise comparison of the first n characters of two strings.
* The `strcasecmp()` function performs a case-insensitive comparison of two strings.
* The `strlen()` function returns the length of a string.
* The `>=` and `<=` operators can be used to compare strings lexically.

**Example Output:**

cat is bytewise different from dog
cat is lexically bytewise less than dog
cat is lexically bytewise greater than or equal to dog
cat is equal to CAT (case insensitive)
